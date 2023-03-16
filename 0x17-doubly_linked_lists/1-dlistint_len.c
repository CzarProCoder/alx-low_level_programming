#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Calculate the length of a doubly linked lists
 * @h: Pointer to the head of the doubly linked lists
 * Return: Length of the doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *temp = h;

	while (temp->next != NULL)
	{
		temp = temp->next;
		length++;
	}
	length++;
	return (length);
}
