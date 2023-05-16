#include "main.h"
#include <unistd.h>

/**
 * _putchar - It writes the char c to stdout
 * @c: This the char to be print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
