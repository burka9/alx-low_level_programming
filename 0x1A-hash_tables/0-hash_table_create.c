#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: size of the array
 * Return: pointer to the array
 */
hash_table_t hash_table_create(unsigned long int size)
{
	if (size <= 0)
		return (NULL);

	hash_node_t *array = (hash_node_t *)malloc(sizeof(hash_node_t) * size);

	if (array == NULL)
		return (NULL);

	hash_table_t table = {
		size: size,
		array: &array
	};

	return (table);
}
