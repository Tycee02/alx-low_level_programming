#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string that stored binay number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		value = 2 * value + (b[j] - '0');
	}
	return (value);
}
