#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * create_file - creates a file and puts text_content into it
 * @filename: name of file to be created
 * @text_content: text to be put in file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, d;
	ssize_t a;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		a = write(fd, text_content, strlen(text_content));
	if (a != -1)
		d = 1;
	else
		d = -1;
	return (d);
}
