#include "main.h"

/**
  * create_file - creates a file function
  * @filename: the name of the file to create
  * @text_content: text to write in the file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i, x = 0;

	if (filename == NULL)
	{
		return (-1);
	}

		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[x])
			x++;
		i = write(fd, text_content, x);
		if (i != x)
			return (-1);
	}
	close(fd);

	return (1);
}
