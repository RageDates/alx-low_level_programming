#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all the data else 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	if (head == NULL)
		return (0);
	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
