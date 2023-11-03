#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, number, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[i]);
		if (number < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}

