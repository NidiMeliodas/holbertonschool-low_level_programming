#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: param
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			result += va_arg(args, unsigned int);
		va_end(args);
	}
	return (result);
}
