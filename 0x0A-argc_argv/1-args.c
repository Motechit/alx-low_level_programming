#include <stdio.h>
#include "main.h"

/**
 * main - It prints the number of arguments the program passed
 * @argc: It is the  number of arguments
 * @argv: It is the array of arguments
 *
 * Return: It always returns 0 when Successfull
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
