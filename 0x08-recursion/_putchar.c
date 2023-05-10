#include "main.h"
#include <unistd.h>

/**
 * _putchar - This file writes the characters c to stdout
 * @c: This' the character to be print
 *
 * Return: If successful return 1.
 * In case of an error return -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
