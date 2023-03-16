#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list
 * @head: Address of the head of the list
 * @index: Index of node to be returned
 * Return:	- Index of the node
 *		- Null - if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	while (counter <= index)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
