#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: function parameter
 * Return: (1) for true (0) for false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
