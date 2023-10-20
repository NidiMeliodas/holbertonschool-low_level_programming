#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 *
 * Return: Always 0
 *
 * c = colonne
 * l = ligne
 * r = resultat
 *
 */

void times_table(void)
{
	int c;
	int l;
	int r;
	int d;
	int u;

	for (c = 0; c < 10; c++)
	{
		for (l = 0; l <= 9;l++)
		{
			r=c*l;
			u=r%10;
			d=r/10;
			
			if ( d == 0 )
			{
				_putchar(u + '0');
				_putchar(44);
				_putchar(32);
			}
			else if (d != 0)
			{
				_putchar(d +'0');
				_putchar(u +'0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
		_putchar('\n');
	}

}
