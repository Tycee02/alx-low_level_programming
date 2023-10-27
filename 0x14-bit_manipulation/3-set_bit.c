#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: number of the bit
 * Return: 1 for success, -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tee_y = 1;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	tee_y = tee_y << index;
	*n = ((*n) | tee_y);
	return (1);
}
