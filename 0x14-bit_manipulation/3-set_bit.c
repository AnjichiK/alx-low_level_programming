#include "main.h"

/**
 * Set_bit - Puts  bit to certain index to 1
 * @n: Points to no. to change
 * @index: Index for bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

