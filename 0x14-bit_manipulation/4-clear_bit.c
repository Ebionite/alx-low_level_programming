#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a giveb bit to 0
 * @n: pointer to the number to change
 * @index: index of bit to be cleared
 *
 * Return: 1 for in of Success -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
