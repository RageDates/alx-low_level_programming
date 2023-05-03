#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a linked list of integers
 *                      and can handle lists with a loop.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current > current->next)
			current = current->next;
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
	}
	if (current == NULL)
		count++;
	return (count);
}
