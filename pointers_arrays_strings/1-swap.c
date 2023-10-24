#include "main.h"

void swap_int(int *a, int *b)
{
	int Swap = *a;

	*a = *b;
	*b = Swap;
}
