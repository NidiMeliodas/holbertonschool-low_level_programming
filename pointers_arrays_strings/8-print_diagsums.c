#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: 2D array of integers
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[(size + 1) * i];

	for (j = 1; j <= size; j++)
		sum2 += a[(size - 1) * j];

	printf("%d, %d\n", sum1, sum2);
}
