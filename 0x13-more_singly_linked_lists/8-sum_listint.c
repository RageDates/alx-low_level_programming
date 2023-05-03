#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - return the sum of all the data of list
 * @head: pointer to the head node
 *
 * Return: The sum of all the data else 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
