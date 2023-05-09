#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		write_count = write(fd, text_content, i);
		if (write_count != i)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
