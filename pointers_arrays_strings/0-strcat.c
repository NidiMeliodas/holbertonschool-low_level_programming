#include "main.h"

/**
 * _strcat - links two strings
 *
 * @dest:
 *
 * @src: 
 *
 * Return: pointer string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
