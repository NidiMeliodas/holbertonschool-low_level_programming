#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: pointer to the resulting string
 */

char *leet(char *s)
{
	int i = 0, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (s[i])
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}
		i++;
	}
	return (s);
}
