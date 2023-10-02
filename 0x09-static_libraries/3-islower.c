#include "main.h"
/**
 * _islower - check for lowercase and uppercase
 * @c: parameter to be checked
 * Return: is 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
