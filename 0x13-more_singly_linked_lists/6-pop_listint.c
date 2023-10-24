#include "lists.h"

/**
 * pop_listint - delete head of a node
 * @head: pointer to first node
 * Return: return (0) if empty
 */
int pop_listint(listint_t **head)
{
	int element;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);
	current = *head;

	element = current->n;
	h = current->next;

	free(current);

	*head = h;
	return (element);
}
