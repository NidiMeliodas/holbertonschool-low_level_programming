#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; accept[i] != '\0'; i++)
		len++;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
