#include <unistd.h>

<<<<<<< HEAD

=======
>>>>>>> d7f18ee2e51aa41c03a802c1b564585781d27acb
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
