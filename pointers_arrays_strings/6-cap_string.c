#include <stdlib.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: String to cap
 *
 * Return: char *
 */

char *cap_string(char *s)
{
	char separators[] = {',',';','.','!','?','"','(',')','{','}','\n',' ','\t','\0'};

	int i = 0, b;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (b = 0; separators[b] != '\0'; b++)
			{
				if (s[i - 1] == separators[b] || (i == 0 && b == 0))
				{
					s[i] -= 32;
				}
			}
		}
		i++;
	}

	return (s);
}
