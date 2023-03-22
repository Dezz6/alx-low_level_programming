#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: Sum of a and b
 */

int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - Subtracts one integer from another integer
 * @a: first integer
 * @b: second integer
 * Return: Difference of a and b
 */
int op_sub(int a, int b) { return (a - b); }
/**
 * op_mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: Multiple of a and b
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - Divides one integer by another integer
 * @a: First integer
 * @b: Divisor
 * Return: Result of a divided by b
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
 * op_mod - Gets the remainder of the division of integers
 * @a: first integer
 * @b: second integer
 * Return: Result of a modulo b
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
