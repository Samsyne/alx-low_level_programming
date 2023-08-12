#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create a file and write into it
 * @filename: pointer to a filename
 * @text_content: content to be copied into a file
 * Return: 1 if successful, -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_of_letters;
	ssize_t rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (no_of_letters = 0; text_content[no_of_letters]; no_of_letters++)
		;

	rwr = write(fd, text_content, no_of_letters);
	if (rwr == -1)
		return (-1);

	close(fd);
	return (1);
}

