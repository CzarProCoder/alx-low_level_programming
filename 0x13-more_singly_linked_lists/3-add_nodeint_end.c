#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Function to add a pointer to the end of list
 * @head: Pointer to pointer to the head
 * @n: Value to be added
 * Return: Pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
		*head = new;
	else
		while (temp)
		{
			if (temp->next == NULL)
				temp->next = new;
			temp = temp->next;
		}
	return (*head);
}
