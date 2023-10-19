#include "main.h"

/**
 * jack_bauer - prints every min of his day
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
