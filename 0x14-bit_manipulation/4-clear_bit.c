#include "main.h"

/**
 * clear_bit - It sets the value of a given bit to 0
 * @n: It is the ptr to the num to be changed
 * @index: This is the index of the bit to clear
 * Return: It returns 1 when successful & -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
