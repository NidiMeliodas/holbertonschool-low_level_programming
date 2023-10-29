#include "main.h"

/**
 * _strchr - Locate character in string.
 * @s:
 * @c:
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
