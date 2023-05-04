#include "main.h"

/**
 * Get_endianness - Confirms if machine is SMALL or BIG endian
 * Return: 0 for BIG, 1 for SMALL
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

