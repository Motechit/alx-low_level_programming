#include "main.h"

/**
 * factorial returns the factorial of a number
 * n is the number to return the factorial from
 *
 * Returns the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
