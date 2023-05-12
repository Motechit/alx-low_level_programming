#include <stdio.h>
#include "main.h"

/**
 * main - It is to print all arguments it receives
 *
 * @argc: It is the number of arguments
 * @argv: it is the array of arguments
 *
 * Return: It should always return 0 when successfull
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
