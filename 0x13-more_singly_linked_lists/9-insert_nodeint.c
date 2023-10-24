#include "lists.h"
/**
 * create_new_node - creates a new node
 * @n: the data of the node
 * Return: pointer to the node
 */
listint_t *create_new_node(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}

/**
 * insert_nodeint_at_index - insert a node at an index in a list
 * @head: pointer to the first element of the list
 * @idx: index to the position the new node is to be inserted
 * @n: the data of the new node created
 * Return: the address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tempo;
	listint_t *tempo_old;
	listint_t *newnode;

	tempo = *head;
	if (head == NULL)
		return (NULL);
	newnode = create_new_node(n);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	if (idx == 0)
	{
		*head = newnode;
	}
	for (i = 0; i < idx - 1 && tempo != NULL && idx != 0; i++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = tempo;
	else
	{
		tempo_old = tempo->next;
		tempo->next = newnode;
		newnode->next = tempo_old;
	}
	return (newnode);
}
