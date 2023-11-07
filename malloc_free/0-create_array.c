#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
