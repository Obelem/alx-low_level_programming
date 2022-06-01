#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX std output
 * @filename: file to be read
 * @letters: num of letters to be read and printed
 * Return: num written or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	/* read from file descriptor */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	num_read = read(fd, buff, letters);
	close(fd);

	/* print to POSIX stdout */
	num_written = write(STDOUT_FILENO, buff, num_read);

	free(buff);

	return (num_written);
}
