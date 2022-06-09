#include "lists.h"

/**
 * @brief prints every item in double linked list
 *
 * @param h pointer to the head of the list
 * @return size_t number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	register int counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
