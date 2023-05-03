#include "lists.h"

/**
 * listint_len - prints the number of elements in a listint_t
 * @h: Pointer to the head
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
