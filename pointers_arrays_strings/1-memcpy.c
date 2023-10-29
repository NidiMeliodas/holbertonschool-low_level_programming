#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest:
 * @src:
 * @n:
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
