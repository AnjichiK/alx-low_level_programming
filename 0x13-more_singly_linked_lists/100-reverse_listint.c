#include "lists.h"

/**
 * Reverse_listint - It Reverses linked lists
 * @head: Points to head of list
 *
 * Return: Points at head of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

