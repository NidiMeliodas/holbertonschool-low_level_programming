#include "main.h"

/**
 * print_sign - Checks if the number is positive or negative 
 * @n: the int to check
 * Return: 1 and + if n greater than 0, 0 if n = 0, -1 if n less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
       	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
       	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
