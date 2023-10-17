#include <stdio.h>

int main(void)
{
	char c;
	char q ='q',e='e';
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c =! q && c =! e)
		{
			putchar(c);
		}
	}
	putchar('\n);
	return (0);
}
