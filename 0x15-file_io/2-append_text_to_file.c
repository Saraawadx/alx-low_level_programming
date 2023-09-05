#include "main.h"

/**
 * _strlen - calculates the number of chars in string
 * @s: string input
 * Return: number of chars
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (-1);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: pointer to text content
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0, length = _strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!filename || fd == -1)
		return (-1);
	if (length)
		size = write(fd, text_content, length);
	close(fd);
	return (size == length ? 1 : -1);
}
