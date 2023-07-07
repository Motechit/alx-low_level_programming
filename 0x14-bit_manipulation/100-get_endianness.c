#include "main.h"

/**
 * get_endianness - This func. checks if a machine is little or big endian
 * Return: It should return either 0 or 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
