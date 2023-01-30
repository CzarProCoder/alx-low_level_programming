#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a list
 * @head: Pointer to pointer to the head
 * @str: String to be duplicated
 * Return: Pointer to the new Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = *head;

	list_t *NewNode = malloc(sizeof(list_t));

	if (NewNode == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	if (*head == NULL)
		*head = NewNode;
	else
	{
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = NewNode;
				temp->len = len;
				temp->str = strdup(str);
				break;
			}
			temp++;
		}
	}
	return (temp);
}
