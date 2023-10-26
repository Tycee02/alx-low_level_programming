#include "main.h"

/**
 * print_binary - print the binary representation of decimal number
 * @n: number of binary
 */

void print_binary(unsigned long int n)
{
	unsigned int j, count = 0;
	unsigned long int new;

	for (j = 63; j > 0; j--)
	{
		new = n >> j;

		if (new & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
