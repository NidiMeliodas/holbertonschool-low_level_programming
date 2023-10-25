#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int lenght;
	int i;

	while (*(s+lenght) != '\0')
	{
		lenght++;
	}
	for (i = lenght; i >= 0;i--)
	{
		_putchar(*s+lenght);
	}
}
