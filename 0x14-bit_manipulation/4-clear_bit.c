#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0
 *
 * @n: pointer to the number
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tee_y;

	tee_y = 1;
	tee_y = tee_y << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = tee_y ^ *n;

	return (1);
}
