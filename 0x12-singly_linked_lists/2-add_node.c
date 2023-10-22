#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: head of the node
 * @str: string to store
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int a, count = 0;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	current->len = count;
	current->next = *head;
	*head = current;

	return (*head);
}
