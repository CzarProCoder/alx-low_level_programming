#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */

void free_listint(listint_t *head)
{
	while (head)
		free(head->n);
		free(head);
		head = head -> next;
}
