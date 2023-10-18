#include "main.h"

/**
 * print_alphabet - void print_alphabet print the alphabet in lowercase,
 *
 * followed by a new
 */

void print_alphabet(void)
{
	char a;
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
}
