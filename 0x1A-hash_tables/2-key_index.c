#include "hash_tables.h"

/**
 * key_index - This is the key index of the current item
 * @key: The key to get the index of
 * @size: This is the size of the array item of the hash table
 * Return: It returns the index of the key
 * Description: It utilises the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
