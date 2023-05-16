#include "main.h"
#include <stdlib.h>

/**
 * create_array - it creates array of size size and assign char c
 * @size: This is the size of the array
 * @c: Its the char to be assigned
 * Description:It creates array of size size and assign char c
 * Return: It returns pointer to array if success but NULL if failed
 *
 */

char *create_array(unsigned int size, char c)

{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL;
			return (NULL);
			for (i = 0; i < size; i++)
			str[i] = c;
			return (str);
}
