#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: head of a node
 * Return: always (0)
 */

void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tempo = current) != NULL)
		{
			current = current->next;
			free(tempo);
		}
		*head = NULL;
	}
}
