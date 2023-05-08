#include "main.h"

/**
 *_memcpy - This is the function that copies memory area
 *@dest: This is the memory where it is stored
 *@src: This is the memory where it is copied
 *@n: It is number of bytes
 *
 *Return: It copies the  memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
