#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate strings
 * @n: The number of bytes
 * @s1: First string
 * @s2: Seconcd string
 *
 * Return: Null or pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	char ending = '\0';
	char *End = &ending;
	unsigned int lenS1 = strlen(s1);
	unsigned int lenS2 = strlen(s2);
	unsigned int L;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= lenS2)
	{
		L = lenS1 + lenS2 + 1;
		ptr = malloc(L * sizeof(char));
		memcpy(ptr, s1, lenS1);
		memcpy(ptr + lenS1, s2, lenS2 + 1);
		return (ptr);
	}
	L = lenS1 + n + 1;
	ptr = malloc(L * sizeof(char));
	memcpy(ptr, s1, lenS1);
	memcpy(ptr + lenS1, s2, n);
	memcpy(ptr + lenS1 + n, End, 1);
	return (ptr);
}
