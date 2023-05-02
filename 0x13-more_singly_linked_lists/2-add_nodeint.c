#include "lists.h"

/**
 * add_nodeint - It is meant to add a new node at the start of any given linked list
 * @head: This one point at node  one in the list
 * @n: Now this is data to put into the given new node
 *
 * Return: This is a pointer to any new node, or else a pointer  of NULL in case it fails
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

