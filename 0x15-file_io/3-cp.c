#include "main.h"

#include "main.h"
/**
 * main - copies the contents of a file to another file
 * @argc: argument counts
 * @argv: number of arguments
 * Return: 0 always when success
 */
int main(int argc, char *argv[])
{
	int fd, write_file, read_bytes, i, j;
	char buffer[512];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	write_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((read_bytes = read(fd, buffer, 512)) > 0)
	{
		if (write_file < 0 || write(write_file, buffer, read_bytes) != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd);
			exit(99);
		}
	}
	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(fd);
	j = close(write_file);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", write_file);
		exit(100);
	}
	return (0);
}
