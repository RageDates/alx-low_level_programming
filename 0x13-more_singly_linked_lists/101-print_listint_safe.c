#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print a linked list of integers
 * @head: pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;
	size_t counter = 0;

	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		counter++;
		if (ptr > ptr->next)
			ptr = ptr->next;
		else
		{
			printf("-> [%p] %d\n", (void *)ptr->next, ptr->next->n);
			break;
		}
	}
	if (ptr == NULL)
		counter++;
	return (counter);
}
