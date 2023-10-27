#include "main.h"
/**
 * get_endianness - check the system Byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	
	unsigned int i = 1;

	char *p = (char *) &i;

	return (*p);
}
