#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: a pointer to the header
 * @str: the first element of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *New_list = malloc(sizeof(list_t));
	char *str_dup = strdup(str);

	if (New_list == NULL)
		return (NULL);
	if (str_dup == NULL)
	{
		free(New_list);
		return (NULL);
	}
	New_list->str = str_dup;
	New_list->len = strlen(str_dup);
	New_list->next = *head;
	return (New_list);
}
