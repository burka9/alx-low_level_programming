#include "hash_tables.h"

/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);

	return (0);
}
