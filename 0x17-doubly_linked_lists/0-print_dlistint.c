#include "lists.h"

/**
 * @brief prints every item in double linked list
 *
 * @param h pointer to the head of the list
 * @return size_t number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;
	dlistint_t *current_node = h;

	if (current_node == NULL)
		return (num_of_nodes);

	while (current_node->prev != NULL)
		current_node = current_node->prev;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
