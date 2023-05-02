#include "lists.h"

/**
 * add_nodeint - Its meant to add a node at start of any given linked list
 * @head: This one point at node  one in the list
 * @n: Now this is data to put into the given new node
 *
 * Return: This points to new item, or else points  to  NULL in case it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

