#include "lists.h"

/**
 * listint_len -Is to  return total items in list that is a linked one
 * @h: Gives a linked list and its of type listint_t to the traverse
 *
 * Return:The exact amount of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

