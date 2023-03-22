#include "3-calc.h"

/**
 * main - prints the result of simple aritmetic ops
 * @argc: Argument count
 * @argv: Array of pointers to argc
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	oper = get_op_func(argv[2]);

	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", oper(a, b));

	return (0);
}
