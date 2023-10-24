#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a list
 * @head: head of a list
 * @index: index of node
 * Return: if node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	return (head);
}
