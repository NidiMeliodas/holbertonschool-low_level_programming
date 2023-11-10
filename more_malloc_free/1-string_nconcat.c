#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (*(s1 + len1))
		len1++;
	len2 = 0;
	while (*(s2 + len2))
		len2++;

	if (n >= len2)
		n = len2;

	sout = malloc(sizeof(char) * (len1 + n + 1));
	if (sout == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(sout + i) = *(s1 + i);
	for (j = 0; j < n; j++)
		*(sout + len1 + j) = *(s2 + j);
	*(sout + len1 + n) = '\0';

	return (sout);
}
