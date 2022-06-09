#include "lists.h"

/**
 * @brief prints every item in double linked list
 * 
 * @param h pointer to the head of the list
 * @return size_t number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == null)
		return (counter);

	while (h->prev != null)
		h = h->prev;

	while (h != null)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
}