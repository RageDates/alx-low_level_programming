#include "main.h"
#include <stdlib.h>
#include <string.h>

#define MAX 256

char **strtow(char *str)
{
	int i, j;
	int num = 0;
	char **words;
	int x = 0;
	char word[MAX];

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num++;
	}
	words = (char **) malloc((num + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
			word[x++] = str[i];
		else if (i > 0 && str[i - 1] != ' ')
		{
			word[x] = '\0';
			words[x / MAX] = strdup(word);
			if (words[x / MAX] == NULL)
			{
				for (j = 0; j < x / MAX; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			x = 0;
		}
	}
	if (x > 0)
	{
		word[x] = '\0';
		words[x / MAX] = strdup(word);
		if (words[x / MAX] == NULL)
		{
			for (j = 0;
		j < x / MAX; j++)
				free(w
			ords[j]);
			free(wor
			ds);
			return (
			NULL);
		}
	}
	words[num] = NULL;
	return (words);
}
