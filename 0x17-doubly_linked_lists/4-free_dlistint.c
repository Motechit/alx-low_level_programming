#include "lists.h"

/**
 * free_dlistint - It frees a dlistint_t list.
 * @head: This is the pointer to the head of the list
 * Return: Doesn't return anything
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
