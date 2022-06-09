#include "lists.h"

/**
 * @brief returns the number of nodes in a double linked list
 *
 * @param h head of the list
 * @return size_t count of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
