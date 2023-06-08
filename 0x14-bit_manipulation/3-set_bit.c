#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: It is the ptr to the number to change
 * @index: This is the index of the bit to set to 1
 * Return: It returns 1 when successful & -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
