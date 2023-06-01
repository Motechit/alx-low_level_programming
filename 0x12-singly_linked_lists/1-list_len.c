#include <stdlib.h>
#include "lists.h"

/**
 * list_len - It returns the num of elements in a linked list
 * @h: This is the ptr to the list_t list
 * Return: It returns the num of elements in h
 */

size_t list_len(const list_t *h)

{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
