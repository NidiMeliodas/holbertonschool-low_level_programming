#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s: f
 * @b: f
 * @n: f
 * Return: char*s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
