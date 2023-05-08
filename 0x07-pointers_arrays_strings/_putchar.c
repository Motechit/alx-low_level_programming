#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the character c to stdout
 * @c: This is the character to be print
 *
 * Return: 1. if successful
 * If error occurs, return -1, errno is set correctly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
