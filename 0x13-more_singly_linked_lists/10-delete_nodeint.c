#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node of a list at
 * a paticular index
 * @head: pointer to the beginning of the list
 * @index: index of the node to be freed
 * Return: 1 if successful an -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *tempo;
	listint_t *node;

	tempo = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (j = 0; j < index - 1 && tempo != NULL && index != 0; j++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (-1);
	if (index == 0)
	{
		node = tempo->next;
		free(tempo);
		*head = node;
	}
	else
	{
		if (tempo->next == NULL)
			node = tempo->next;
		else
			node = tempo->next->next;
		free(tempo->next);
		tempo->next = node;
	}
	return (1);
}
