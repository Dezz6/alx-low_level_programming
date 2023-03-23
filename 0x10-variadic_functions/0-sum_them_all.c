#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all parameters)
 * @n: number of parameters
 * @...: arguments to get sum from.
 *
 * Return: sum of all parameters, 0 if NULL
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
