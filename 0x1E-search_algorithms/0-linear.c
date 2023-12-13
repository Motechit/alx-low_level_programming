#include "search_algos.h"

/**
 * linear_search - It linearly searches for a num in an array
 * @array: This is the ptr to the 1st element of the array to search
 * @size: This is the num of elements of the arrary to search in
 * @value: This is the target value to search for
 * Return: It returns the index the value is located else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
