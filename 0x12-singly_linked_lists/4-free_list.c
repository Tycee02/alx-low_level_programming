#include "lists.h"
/**
 * free_list - function that  frees a list of nodes
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *tempo;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
	free(head->str);
	free(head);
}
