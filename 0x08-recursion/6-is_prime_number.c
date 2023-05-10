#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - tells us if an integer is a prime number or not
 * n is the number to be evaluate
 *
 * It returns 1 if n is a prime number, or 0 if n is not a prime no
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime calculates if a number is prime recursively
 * n is the number to be evaluated
 * i is an  iterator
 *
 * It returns 1 if n is prime and returns 0 if n is'nt prime
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

