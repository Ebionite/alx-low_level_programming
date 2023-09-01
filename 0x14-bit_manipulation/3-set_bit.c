#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets a bit at a giv ind to 1
 * @n: pointer that points to the  number to be changed
 * @index: index of bit to setting to 1
 *
 * Return: 1 for success, -1 in case of failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

