#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - free a listint_t
 * @head: pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
