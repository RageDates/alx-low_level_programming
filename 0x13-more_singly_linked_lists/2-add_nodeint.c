#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginning of a listint_t
 * @head: pointer to the head node
 * @n: the value to be stored
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
