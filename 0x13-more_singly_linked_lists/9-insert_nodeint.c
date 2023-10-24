#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given point
 * @head: pointer to first node
 * @idx: index of the node
 * @n: integer number
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && h != NULL; j++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
	}
	else
	{
		newnode->next = h->next;
		h->next = newnode;
	}
	return (newnode);
}
