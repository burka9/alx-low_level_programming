#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 *
 * @ht: the table
 * @key: the key
 * @value: the value
 *
 * Return: 1/0 - pass/fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	if (ht == NULL || key == "" || *key == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
}
