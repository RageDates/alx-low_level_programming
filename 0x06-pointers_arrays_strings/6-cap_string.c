#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (s[i - 1] == '' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}' ||
				s[i - 1] == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
