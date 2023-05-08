#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * check_elf_header - check if the given file has a valid ELF header
 * @fd: the file descriptor of the file to check
 * Return: 1 if the ELF header is valid, 0 otherwise
 */
int check_elf_header(int fd)
{
	Elf64_Ehdr header;
	ssize_t n;

	n = read(fd, &header, sizeof(header));
	if (n < (ssize_t)sizeof(header))
		return (0);

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		return (0);

	return (1);
}

/**
 * print_elf_header - display the ELF header information of the given file
 * @filename: the name of the file to display the header information for
 */
void print_elf_header(const char *filename)
{
	Elf64_Ehdr header;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open file %s\n", filename);
		exit(98);
	}

	if (!check_elf_header(fd))
	{
		dprintf(STDERR_FILENO, "Error: File %s is not an ELF file\n", filename);
		exit(98);
	}

	lseek(fd, (off_t)0, SEEK_SET);
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Unable to read ELF header of file %s\n", filename);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%s", header.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
	printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d%s\n", header.e_ident[EI_VERSION], header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:     printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX:     printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD:   printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX:    printf("UNIX - GNU/Linux\n"); break;
		case ELFOSABI_SOLARIS:  printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX:     printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD:  printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64:    printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
	}
	printf(" ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf(" Type: ");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (None)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown: %x>\n", header.e_type);
	}
	printf(" Entry point address: %lx\n", header.e_entry);
	printf(" Start of program headers: %lu (bytes into file)\n", header.e_phoff);
	printf(" Start of section headers: %lu (bytes into file)\n", header.e_shoff);
	printf(" Flags: 0x%x\n", header.e_flags);
	printf(" Size of this header: %u (bytes)\n", header.e_ehsize);
	printf(" Size of program headers: %u (bytes)\n", header.e_phentsize);
	printf(" Number of program headers: %u\n", header.e_phnum);
	printf(" Size of section headers: %u (bytes)\n", header.e_shentsize);
	printf(" Number of section headers: %u\n", header.e_shnum);
	printf(" Section header string table index: %u\n", header.e_shstrndx);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close file %s\n", filename);
		exit(98);
	}
}

