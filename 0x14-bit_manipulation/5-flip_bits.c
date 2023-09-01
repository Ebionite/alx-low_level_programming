#include "main.h"
#include <stdio.h>

/**
 * flip_bits - This counts the no. of bits to change
 * getting from one particular no. to another
 * @n: First Number
 * @m: Second Number
 *
 * Return: The no. of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
