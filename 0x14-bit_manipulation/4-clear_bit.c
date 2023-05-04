#include "main.h"

/**
 * Clear_bit - Puts value of certain bit to 0
 * @n: Points at no. to convert
 * @index:The index of bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
