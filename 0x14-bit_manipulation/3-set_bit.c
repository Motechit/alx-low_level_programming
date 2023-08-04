#include "main.h"

/**
 * set_bit - It sets a bit at a given index to 1
 * @n: This is the pointer to the num to be changed
 * @index: T'is the index of the bit to be set to 1
 * Return: If successful, it returns 1, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
