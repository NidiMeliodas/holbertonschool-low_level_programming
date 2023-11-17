#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t taille;

	if (array == NULL || action == NULL)
		return;
	for (taille = 0; taille < size; taille++)
		action(array[taille]);
}
