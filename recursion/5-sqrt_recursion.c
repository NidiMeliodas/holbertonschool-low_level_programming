#include "main.h"

/**
 * sqrt_extra - Recursive helper function for _sqrt_recursion.
 *
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root of n.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */

int sqrt_extra(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_extra(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_extra(n, 1));
}
