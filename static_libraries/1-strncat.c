#include "main.h"

/**
 * _strncat - links two strings
 *
 * @dest:
 *
 * @src:
 *
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (j < n && (*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
