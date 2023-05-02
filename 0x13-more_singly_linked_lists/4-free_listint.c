#include "lists.h"

/**
 * free_listint - A linked list is made free this way
 * @head: listint_t is the list for us to make free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

