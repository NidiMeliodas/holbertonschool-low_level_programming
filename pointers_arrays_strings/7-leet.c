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
	char *ptr = s;
       	while (*ptr != '\0')
	{
		if ((*ptr == 'a' || *ptr == 'A') || (*ptr == 'e' || *ptr == 'E') ||
				(*ptr == 'o' || *ptr == 'O') || (*ptr == 't' || *ptr == 'T') ||
				(*ptr == 'l' || *ptr == 'L'))
		{
			if (*ptr == 'a' || *ptr == 'A')
			{
				*ptr = '4';
			}
			else if (*ptr == 'e' || *ptr == 'E')
			{
				*ptr = '3';
			}
			else if (*ptr == 'o' || *ptr == 'O')
			{
				*ptr = '0';
			}
			else if (*ptr == 't' || *ptr == 'T')
			{
				*ptr = '7';
			}
			else if (*ptr == 'l' || *ptr == 'L')
			{
				*ptr = '1';
			}
		}
		ptr++;
	}
	return str;
}
