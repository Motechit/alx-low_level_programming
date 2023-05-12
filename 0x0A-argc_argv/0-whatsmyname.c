#include <stdio.h>
#include "main.h"

/**
 * main - It prints out the program's name
 * @argc: It is  the number of arguments
 * @argv: It is the array of arguments
 *
 * Return: It always returns 0. on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
