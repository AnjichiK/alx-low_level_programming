#include "lists.h"

/**
 * pop_listint - This is meant to remove the head item in any list that is linked
 * @head:This points at the very first item of a list that is linked
 *
 * Return: Data in the item that had been removed,
 * or 0 in case list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

