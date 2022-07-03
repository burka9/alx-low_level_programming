#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: size of the array
 * Return: pointer to the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size <= 0)
		return (NULL);

	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);

	for (int i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
