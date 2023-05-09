#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: Pointer to the filename to create
 * @text_content: the text content
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		return (-1);
	}


	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content != NULL && text_content[i])
	{
		i++;
	}

	len = write(fd, text_content, i);
	if (len < 0)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
