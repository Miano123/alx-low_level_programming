#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: content to append
  * Return: 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, x = 0;

	if  (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (!text_content)
	{
		if (close(file) == -1)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	i = write(file, text_content, x);
	if (i != x)
		return (-1);
	close(file);

	return (1);
}
