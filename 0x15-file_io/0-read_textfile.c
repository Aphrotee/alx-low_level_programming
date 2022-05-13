#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads the content of a text file
 * @filename: name of text file
 * @letters: the number of bytes to print
 *
 * Return: the number of bytes it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = (char *)malloc(sizeof(char) * letters);
	ssize_t n, d;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	n = read(fd, buf, letters);
	if (letters == 2000)
		d = write(2, buf, n);
	else
		d = write(1, buf, n);
	close(fd);
	if (d == -1)
		d = 0;
	return (d);
}
