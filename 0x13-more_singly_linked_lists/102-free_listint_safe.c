#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of type listint_t
 * @h: A pointer to the pointer to the head node of the linked list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}
	*h = NULL;
	return (count);
}

