#include "main.h"

/**
 * _strpbrk - It is the Entry Point
 * @s: input
 * @accept: input
 * Return: If succeful always give 0
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
