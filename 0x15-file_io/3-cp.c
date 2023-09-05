#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: 1 success, -1 failure
*/

int main(int ac, char **av)
{
	int file_from = 0, file_to = 0;
	ssize_t size;
	char BUFFER[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
				exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file NAME_OF_THE_FILE %s\n"
			, av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	if (file_to == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't write to NAME_OF_THE_FILE %s\n"
				, av[2]), exit(99);

	while ((size = read(file_from, BUFFER, READ_BUFFER_SIZE)) > 0)
		if (write(file_to, BUFFER, size) != size)
			dprintf(STDERR_FILENO,
				"Error: Can't write to NAME_OF_THE_FILE %s\n"
				, av[2]), exit(99);
	if (size == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file NAME_OF_THE_FILE %s\n"
			, av[1]), exit(98);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", file_from),
			exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", file_to),
			exit(100);
	return (1);
}
