#include "main.h"

/**
 * _strchr - It is the Entry Point
 * @s: input
 * @c: input
 * Return: If successful Always return 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
