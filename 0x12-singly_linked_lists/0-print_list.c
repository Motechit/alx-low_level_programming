#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints all the elements of a linked list
 * @h: This is the ptr to the list_t list to be printed
 * Return: It returns the num of nodes being printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
