#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		/*  Print a newline when the end of the string is reached */
		return;
	}
	_putchar(*s);     /*  Print the current character */
	_puts_recursion(s + 1); /*  Recursively print the rest of the string */
}
