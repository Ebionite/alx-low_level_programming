#include "main.h"
#include <stdio.h>

/**
 * set_bit - sts a bt at a giv ind to 1
 * @n: pointer to the no. to chng
 * @index: index of the bit to set to 1
 *
 * Return: 1 for suces, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

