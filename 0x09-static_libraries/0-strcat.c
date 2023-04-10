#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
<<<<<<< HEAD
=======

>>>>>>> d7f18ee2e51aa41c03a802c1b564585781d27acb

	dest[i] = '\0';
	return (dest);
}
