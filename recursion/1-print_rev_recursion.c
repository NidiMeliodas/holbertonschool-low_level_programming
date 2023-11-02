#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		/* Base case: Stop the recursion when the end of */
		/* the string is reached */
	}
	_print_rev_recursion(s + 1);
	/* Recursively call the function with the next character */
	_putchar(*s);
	/* Print the current character after the recursion unwinds */
}
