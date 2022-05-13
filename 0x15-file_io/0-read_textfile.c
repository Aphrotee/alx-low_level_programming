#include <fctl.h>
#include <sys/stat.h>

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

	fd = open(filename, O_RDONLY);
	n = read(fd, buf, letters);
	d = write(1, buf, n);
	return (d);
}