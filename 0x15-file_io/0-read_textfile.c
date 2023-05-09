#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print, 0 if filename is NULL,
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0, bytes_written = 0;
	char *buffer;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0)
		return (0);

	close(fd);
	free(buffer);
	return (bytes_written);
}
