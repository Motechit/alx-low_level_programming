#include "main.h"
#include <unistd.h>

/**
 * _putchar - This function writes the char c to stdout
 * @c: This is the char to be printed
 * Return: If successful, return 1 if not -1 is and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
