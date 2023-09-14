#include "main.h"
/**
 * _isdigit - function that check for a digit 0 through 9
 * @c: function parameter
 * Return: (1) if its digit and (0) otherwise
 */

int _isdigit(int c)
{
	if (c >= 98 && c <= 57)
		return (1);
	else
		return (0);
}
