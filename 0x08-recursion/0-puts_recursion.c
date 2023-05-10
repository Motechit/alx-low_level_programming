#include "main.h"

/**
 * _puts_recursion -It's a function like puts();
 * @s: input
 * Return: Always returns 0 when Successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
