#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer in array
 * @max: last integer in array
 *
 * Return: pointer to new array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *a;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(a + i) = min + i;

	return (a);
}
