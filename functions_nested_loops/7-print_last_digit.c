#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the full digit
 * Return: return the last digit of n
 */

int print_last_digit(int n)
{
	int a;
	if (n<0)
	{
		a=n*-1;
	}
	a=a%10;
	putchar(a+'0');
	return (a);
}
