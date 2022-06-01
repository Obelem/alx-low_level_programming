#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of created file
 * Return: 1 for success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, num_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; )
		len++;

	num_written = write(fd, text_content, len);

	if (num_written == -1)
		return (-1);

	close(fd);

	return (1);
}
