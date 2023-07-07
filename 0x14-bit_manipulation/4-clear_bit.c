#include "main.h"

/**
 * clear_bit - This functions sets the value of a given bit to 0
 * @n: This is the ptr to the num to change
 * @index: This is the index of the bit
 * Return: If successful returns 1, if not -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
