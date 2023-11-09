#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *string;
	int i,j;

	if (str == 0)
	{
		return(NULL);
	}
	for (i = 0; str[i] != '\0'; a++)
	{
		i++
		break;
	}
	string = malloc(i * sizeof(*string));
	if (string == 0)
	{
		return (NULL);
	}
	for (j = 0; b < a;b++)
	{
		s[b] = str[b];
	}
	return (string)
}

