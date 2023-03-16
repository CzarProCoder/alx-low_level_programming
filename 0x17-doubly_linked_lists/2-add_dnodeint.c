#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginnig of a doubly linked list
 * @head: Pointer to the head of the dlistint_t
 * @n: value to be added on the new node
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
