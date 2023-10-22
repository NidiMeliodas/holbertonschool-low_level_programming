#include "main.h"

void print_triangle(int size)
{
	int i,j,k,l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			k=size - i;
			for (j = 0;k < size;  j++)
			{
				_putchar(' ');
			}
			for (l = 0;l = i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
