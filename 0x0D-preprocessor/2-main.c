#include "stdio.h"
#include "stdlib.h"

/**
 * main - Function to print name of file from which
 * it was compiled, followed by a new line.
 * Return: 0 always
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
