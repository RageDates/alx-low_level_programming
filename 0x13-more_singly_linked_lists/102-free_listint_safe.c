#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - free a linked list
 * @h: a pointer to the head node
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr, *temp;
	size_t counter = 0;

	if (h == NULL)
		return (0);

	ptr = *h;
	while (ptr != NULL)
	{
		counter++;
		temp = ptr->temp;
		free(ptr);
		if (temp >= ptr)
			break;
		ptr = next;
	}
	*h = NULL;
	return (counter);
}

