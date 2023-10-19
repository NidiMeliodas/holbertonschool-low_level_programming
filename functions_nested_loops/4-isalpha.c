#include "main.h"

/**
 * int _isalpha - Chechs letters
 * @c: the checked character
 * Return: 1 if c = letter ,else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
