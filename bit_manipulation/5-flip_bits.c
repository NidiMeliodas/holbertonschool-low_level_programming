#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to
 * get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;

	for (; xor_result; xor_result >>= 1)
	{
		count += xor_result & 1;
	}

	return (count);
}

