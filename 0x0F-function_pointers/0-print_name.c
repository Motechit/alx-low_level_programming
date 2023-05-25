#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - It prints name using ptr to fxn
 * @name: This is the str to add
 * @f: Ptr to fxn
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
