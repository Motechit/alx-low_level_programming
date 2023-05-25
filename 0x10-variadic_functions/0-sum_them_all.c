#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - It returns the sum of all its paramters
 * @n: This is the num of paramters passed to the fxn
 * @...: A variable num of paramters to cal the sum of
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
