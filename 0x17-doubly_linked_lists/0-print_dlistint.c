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
	dlistint_t *current_node;

	if (h == NULL)
		return (num_of_nodes);

	while (h->prev != NULL)
		h = h->prev;

	current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
