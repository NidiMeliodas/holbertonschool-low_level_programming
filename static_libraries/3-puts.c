#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to a char
 *
 * Return: void
 */
void _puts(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}

	_putchar('\n');
}
