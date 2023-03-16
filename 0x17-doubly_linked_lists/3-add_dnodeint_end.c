#include "lists.h"

/**
 * add_dnodeint_end - Add a node at end of doubly linked list
 * @head: Pointer to the address of head of the doubly linked list
 * @n: Value to be added to the new node
 * Return: Returns the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	return (new);
}
