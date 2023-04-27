#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_list;
	return (new_list);
}

