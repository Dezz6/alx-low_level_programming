#include <unistd.h>

/**
 * _putchar - write the character c
 * @c: parameter function
 * Return: on sucess 1
 * on error, -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
        return(write(1, &c, 1));
}
