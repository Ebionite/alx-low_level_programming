#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the val of giv bit to 0
 * @n: pointer to the no. to chng
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
