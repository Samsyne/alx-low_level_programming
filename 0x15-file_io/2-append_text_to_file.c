#include "main.h"
/**
 * append_text_to_file - add text to an existing file
 * @filename: name of file to be appended
 * @text_content: the content to be appended to the file
 * Return: 1 on success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int no_of_letters;
	int rwr;

	if (!filename)
	return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	if (text_content)
	{
		for (no_of_letters = 0; text_content[no_of_letters]; no_of_letters++)
			;
		rwr = write(fd, text_content, no_of_letters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
