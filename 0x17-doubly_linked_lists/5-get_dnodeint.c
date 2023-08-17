#include "lists.h"

/**
 * get_dnodeint_at_index - It returns the nth node of a dlistint_t linked list
 * @head: This is the pointer to head of the list
 * @index: This is the index of the node, it starts at 0
 * Return: It returns the nth node or null
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
