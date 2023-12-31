#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value of bit
 * @index: number of a bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
