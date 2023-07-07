#include "main.h"

/**
 * get_bit - This fucntion returns the value of a bit at an index in a decimal
 * @n: This is the num to be searched
 * @index: This is the specified index of the bit
 * Return: It should return the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
