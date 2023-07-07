#include "main.h"

/**
 * set_bit - It helps to set a bit at a given index to 1
 * @n: This is the ptr to the num to change
 * @index: This is the index of the bit
 * Return: If successful, it retruns 1, if not -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
