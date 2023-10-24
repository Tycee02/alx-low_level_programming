#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
