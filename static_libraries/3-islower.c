#include "main.h"

/**
 * _islower - Check if c is lowercase to return 1 if not return 0
 * @c: is the value that needs checking
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
