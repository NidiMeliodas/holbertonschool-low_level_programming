#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
