#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head of node
 * Return: number of element;
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
