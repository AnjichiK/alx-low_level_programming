#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To read a text then output to STDOUT.
 * @filename: char to be read
 * @letters: total letters for reading
 * Return: w- actual total bytes read and outputted
 *        0 when func fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
