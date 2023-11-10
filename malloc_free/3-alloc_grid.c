#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int index;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		array[index] = malloc(sizeof(int) * width);

		if (array[index] == NULL)
		{
			for (; index >= 0; index--)
				free(array[index]);

			free(array);
			return (NULL);
		}
	}

	return (array);
}
