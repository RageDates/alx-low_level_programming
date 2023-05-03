#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - find the loop
 * @head: A pointer to the head
 *
 * Return: The address of the node where the loop starts, else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
