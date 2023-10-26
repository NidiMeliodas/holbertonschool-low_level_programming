#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i;
	char tmp;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - 1);
		*(s + len - 1) = tmp;
		len--;
	}
}
