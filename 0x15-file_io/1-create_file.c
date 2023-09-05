#include "main.h"

/**
 * _strlen: function to caalculate string length
 * @s: string input
 * Return: string length
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: pointer to file name
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (length)
		size = write(fd, text_content, length);
	close(fd);
	return (size == length ? 1 : -1);
}
