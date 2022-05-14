#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * append_text_to_file - appends text to file
 * @filename: name of file to append to
 * @text_content: text to be added
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, d = -1, r, w;
	ssize_t a;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd != -1)
	{
		w = access(filename, W_OK);
		r = access(filename, R_OK);
	}
	if ((fd != -1) && (text_content != NULL))
	{
		a = write(fd, text_content, strlen(text_content));
		if (a != -1)
			d = 1;
		else if (a == -1)
			d = -1;
	}
	if ((w == 0) && (r == 0))
		d = -1;
	if (text_content == NULL)
		d = 1;
	close(fd);
	return (d);
}
