#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of bytes to copy
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[len])
		len++;

	while (i < n)
	{
		if (i < len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}

	return (dest);
}

