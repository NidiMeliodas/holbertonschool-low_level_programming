#include "main.h"

/**
 * reverse_array - everything in reverse.
 *
 * @a: Array to reverse
 *
 * @n: Array length
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, tempo;
	const int reverse = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		tempo = a[reverse - i];
		a[reverse - i] = a[i];
		a[i] = tempo;
	}
}
