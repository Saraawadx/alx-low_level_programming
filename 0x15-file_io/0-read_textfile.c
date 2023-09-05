#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *                 to the POSIX standard output
 * @filename: file name
 * @letters: number of characters
 * Return: size
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size;
	char buffer[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, &buffer[0], letters);
	size = write(STDOUT_FILENO, &buffer[0], size);
	close(fd);
	return (size);
}
