#include <stdio.h>
#include "main.h"

/**
 * _putchar - It writes the char c to standout
 * @c: It is the char to print
 * Return: It returns 1. if success
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
