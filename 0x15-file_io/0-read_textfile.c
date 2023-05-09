#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: The name of the file
 * @letters: the size of letter to be read
 * Return: the actual number of letters it read or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t len_write, len_read;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}

	len_read = read(fd, buffer, letters);
	if (len_read < 0)
	{
		free(buffer);
		return (0);
	}

	buffer[len_read] = '\0';
	close(fd);
	len_write = write(STDOUT_FILENO, buffer, len_read);
	if (len_write < 0)
	{
		return (0);
	}
	return (len_write);
}
