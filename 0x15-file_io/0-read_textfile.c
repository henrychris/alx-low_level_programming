#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print, 0 if filename is NULL,
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0, bytes_written = 0, letters2 = letters;
	char buffer[1024];
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((bytes_read = read(fd, buffer, sizeof(letters))) > 0
			&& bytes_written < letters2)
	{
		bytes_written += write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1)
			return (0);
	}

	close(fd);
	return (bytes_written);
}
