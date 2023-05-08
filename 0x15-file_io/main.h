#ifndef main_h
#define main_h
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_elf_header(int fd);
void print_elf_header(const char *filename);

#endif
