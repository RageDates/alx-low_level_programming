#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - print the contents of a list
 * @h: a struct list
 *
 * Return: the nomber of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
