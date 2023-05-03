/**
 * delete_nodeint_at_index - Deletes the node with an index
 * @head: Pointer to a pointer to the first node of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != index || current == NULL)
		return (-1);

	if (prev != NULL)
		prev->next = current->next;
	else
		*head = current->next;

	free(current);

	return (1);
}

