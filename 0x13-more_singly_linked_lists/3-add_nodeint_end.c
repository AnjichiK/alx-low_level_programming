#include "lists.h"

/**
 * add_nodeint_end - Meant to add an item to the end of a linked list
 * @head: This points at the very first item in the singly linked list
 * @n: This now is data meant to enter in the new component
 *
 * Return: This points at new node, or a pointer of NULL if is failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

