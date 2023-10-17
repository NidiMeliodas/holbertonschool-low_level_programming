#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;
	char q ='q',e='e';
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != q && c != e)
		{
			putchar(c);
		}
	}

	putchar('\n');
	
	return (0);
}
