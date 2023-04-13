#include "hash_table.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht - Hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
