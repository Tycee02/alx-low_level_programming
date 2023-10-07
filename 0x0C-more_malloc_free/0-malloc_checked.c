#include "main.h"
/**
 * malloc_checked -  allocates memory
 * @b: size of memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
