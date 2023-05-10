#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome checks if a string is a palindrome
 * s is the string to be reversed
 *
 * 1 is returned if it is, otherwise it returns 0 
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion returns the length of a string
 * s is the string to calculate the length of
 *
 * It returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal cross-checks the characters for palindrome recursively
 * s is the string to check
 * i is an iterator
 * len is the length of the string
 *
 * It returns 1 if palindrome, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
