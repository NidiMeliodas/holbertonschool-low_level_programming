#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo = the rest of the divison
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
