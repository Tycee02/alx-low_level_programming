#include "main.h"
/**
 * create_array - create array
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ary;

	if (size == 0)
		return (NULL);
	ary = malloc(sizeof(char) * size);

	if (ary == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ary[i] = c;
	return (ary);
}
