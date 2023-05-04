#include "main.h"

/**
 * Get_bit - RETURN value of a bit at index in Decimal no.
 * @n: The no. for searching
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

