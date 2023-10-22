#include "lists.h"

/**
 * add_node_end - function that adds a newnode at the end of a list_t list
 * @head: head of the node
 * @str: string to stored
 * Return: address of a new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tempo;
	unsigned int a, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tempo = *head;

	if (tempo == NULL)
		*head = newnode;
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = newnode;
	}
	return (*head);
}
