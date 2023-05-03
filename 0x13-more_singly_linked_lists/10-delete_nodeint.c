#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node with an index
 * @head: a pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != index || current == NULL)
		return (-1);

	if (prev != NULL)
		prev->next = current->next;
	else
		*head = current->next;

	free(current);

	return (1);
}

