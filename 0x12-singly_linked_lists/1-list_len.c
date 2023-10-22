#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer to the first node
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
