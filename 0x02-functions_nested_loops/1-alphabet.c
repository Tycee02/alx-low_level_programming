#include "main.h"
/**
 * print_alphabet - print alphabets
 * Return: always 0
 */
void print_alphabet(void)
{
	char a1;

	a1 = 'a';
	while (a1 <= 'z')
	{
		_putchar(a1);
		a1++;
	}
	_putchar('\n');
}
