#include "lists.h"

/**
 * free_dlistint - free list
 * @head: list to free
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
