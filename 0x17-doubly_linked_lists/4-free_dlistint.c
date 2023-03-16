#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t
 * @head: Pointer to the doubly linked list dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	free(head);
}
