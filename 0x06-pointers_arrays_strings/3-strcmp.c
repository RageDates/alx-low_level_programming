#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if true
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
		return (0);
	else
		return (1);
	
}
