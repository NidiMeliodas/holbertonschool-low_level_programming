#include "main.h"

/**
 * print_alphabet_x10 - void print_alphabet print 10 times the alphabet,
 * in lowercase followed by a new line
 */

void print_alphabet_x10(void)
{
        char a;
	int i;
	for (i = 0; i < 10; i++){
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

