#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - free a listint_t list and sets the head to NULL.
 * @head: a pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
