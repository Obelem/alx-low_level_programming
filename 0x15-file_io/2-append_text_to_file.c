#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 for success, 0 for otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_written, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; )
			len++;

		num_written = write(fd, text_content, len);

		if (num_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
