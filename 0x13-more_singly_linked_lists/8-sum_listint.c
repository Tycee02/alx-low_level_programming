#include "lists.h"

/**
 * sum_listint - return sum of all data
 * @head: head of a list
 * @Return: if the list is empty, return (0)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
