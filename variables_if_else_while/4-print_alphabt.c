#include <stdio.h>

int main(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c =! 'e' && c =! 'q')
		{
			putchar(c);
		}
	}
	putchar('\n);
	return (0);
}
