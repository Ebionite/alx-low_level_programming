#include "main.h"

/**
 * get_endianness - checks if a mac is little or is big endian
 * Return: return 0 for big, while 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
