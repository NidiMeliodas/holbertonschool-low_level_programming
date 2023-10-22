#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 *
 * @size: size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			k = size - i - 1;
			for (j = 0; j < k;  j++)
			{
				_putchar(' ');
			}
			for (l = 0; l <= i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
