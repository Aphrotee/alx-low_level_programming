#include <stddef.h>
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
	int fd, d;
	ssize_t a;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd != -1)
		a = write(fd, text_content, strlen(text_content));
	if (a != -1)
		d = 1;
	else
		d = -1;
	return (d);
}
