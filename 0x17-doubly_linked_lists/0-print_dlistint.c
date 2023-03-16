#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - Print the all nodes of doubly linked list dlistint_t
 * @h: pointer to the first node of the doubly linked list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	const dlistint_t *temp = h;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		length++;
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		printf("%d\n", temp->n);
		length++;
	}
	return (length);
}
