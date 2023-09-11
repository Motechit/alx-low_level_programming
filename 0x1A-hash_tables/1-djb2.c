#include "hash_tables.h"

/**
 * hash_djb2 - This is the ash fxn implementing djb2 algorithm
 * @str: This is the string to be hashed
 * Return: It returns the calculated hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
