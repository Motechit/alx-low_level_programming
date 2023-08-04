#include "main.h"

/**
 * clear_bit - This funct. sets the value of a given bit to 0
 * @n: This is the pointer to the num we want changed
 * @index: This is the index of the bit to clear
 * Return: If successfuk returns 1, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
