#include "lists.h"

/**
 * print_listint - It is meant for printing all characters of a linked list
 * @h: This is for linked list of type listint_t for  printing
 *
 * Return: The exact number of  all the available nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

