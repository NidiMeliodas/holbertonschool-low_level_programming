#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	for ( c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	
	for ( c = 'A' ; c <= 'z' ; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
