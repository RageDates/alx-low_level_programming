#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - prints the alphabet
 * @haystack: the char to check
 * @needle: the char to be checked
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *pHay = haystack;
	char *pNed = needle;
	char *p = NULL;

	while (*pHay != '\0')
	{
		if (*pHay == *pNed)
		{
			if (*p == NULL)
				p = pHay;
			pNed++;
			if (*pNed == '\0')
				return ((char *) p);
		}
		else
		{
			pNed = needle;
			p = NULL;
		}
		pHay++;
	}
	return (NULL);
}
