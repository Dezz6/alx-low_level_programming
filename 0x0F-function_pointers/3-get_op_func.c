#include "3-calc.h"

/**
 * get_op_func - Pick the right function perform an operation
 * @s: Char op
 * Return: Pointer to the function that matches
 * with the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
