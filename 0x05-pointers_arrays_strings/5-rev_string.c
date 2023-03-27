#include "main.h"
#include <string.h>

/**
 * rev_string - prints the alphabet
 * @s: the number to be checked
 */
void rev_string(char *s)
{
	int i, temp, len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
