#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - delete the head node
 * @head: a pointer to the head node
 *
 * Return: The data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int node;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	node = ptr->n;
	free(ptr);

	return (node);
}
