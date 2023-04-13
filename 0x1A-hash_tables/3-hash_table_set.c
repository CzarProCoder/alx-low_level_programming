#include "hash_tables.h"

/**
 * hash_table_set - Adds/Updates an element to the hash table
 * @key: Key to add & can't be an empty string
 * @value: Value to be added in the hash_table
 * Return:  1 if it succedded
 *	    0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
{
	unsigned long int i;
	hash_node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[i];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, i));
}
