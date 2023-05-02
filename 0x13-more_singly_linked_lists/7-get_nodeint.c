#include "lists.h"

/**
 * get_nodeint_at_index - Now this returns item at given index in linked list
 * @head: It is the first item in the list that is linked
 * @index: And this is the index of item to be returned
 *
 * Return: Meant to point at item we want, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

