#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - It returns the sum of two nums
 * @a: This is the first number
 * @b: This is the second number
 * Return: This is the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - It returns the difference of two nums
 * @a: This is the first num
 * @b: This is the second num
 * Return: This is the diff. of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - It returns the product of two nums
 * @a: This is the first num
 * @b: This is the second num
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: This is the first num
 * @b: This is the second num
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - It returns the remainder of the division of two nums
 * @a: This is the first num
 * @b: This is the second num
 * Return: The remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
