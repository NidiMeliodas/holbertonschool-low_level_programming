#include "main.h"

void print_triangle(int size)
{
	int i,j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');
		}
	}
}
