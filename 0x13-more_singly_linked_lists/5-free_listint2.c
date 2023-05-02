#include "lists.h"

/**
 * free_listint2 -It makes a linked lis free
 * @head: It points at the listint_t list to be made free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

