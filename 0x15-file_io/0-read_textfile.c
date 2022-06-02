#include "main.h"

/**
  * read_textfile - reads a text file and prints it
  * to the POSIX standard output
  * @filename: file
  * @letters: number of letters to read and print
  * Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, x;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';

	close(fd);

	x = write(STDOUT_FILENO, buf, i);
	if (x < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (x);
}

