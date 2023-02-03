#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Returns a new node at a given position
 * @head: Pointer to the list
 * @idx: Index where the node is to be added
 * @n: Number n to be added the node
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *temp, *copy = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (copy && count <= idx)
	{
		if ((count + 1) == idx)
		{
			temp = copy->next;
			copy->next = new;
			new->next = temp;
		}
		copy = copy->next;
		count++;
	}
	return (new);
}
