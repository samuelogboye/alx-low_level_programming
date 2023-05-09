#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: Pointer to the filename to create
 * @text_content: the text content
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		return (-1);
	}


	if (text_content != NULL)
	{
		len = write(STDOUT_FILENO, text_content, sizeof(text_content));
		if (len < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
