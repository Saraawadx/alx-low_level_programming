#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: 1 success, -1 failure
*/

int main(int ac, char **av)
{
	int curFD = 0, desFD = 0;
	ssize_t size;
	char BUFFER[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
				exit(97);
	curFD = open(av[1], O_RDONLY);
	if (curFD == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file NAME_OF_THE_FILE %s\n"
			, av[1]), exit(98);
	desFD = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	if (desFD == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't write to NAME_OF_THE_FILE %s\n"
				, av[2]), exit(99);

	while ((size = read(curFD, BUFFER, READ_BUFFER_SIZE)) > 0)
		if (write(desFD, BUFFER, size) != size)
			dprintf(STDERR_FILENO,
				"Error: Can't write to NAME_OF_THE_FILE %s\n"
				, av[2]), exit(99);
	if (size == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file NAME_OF_THE_FILE %s\n"
			, av[1]), exit(98);
	curFD = close(curFD);
	desFD = close(desFD);
	if (curFD)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", curFD),
			exit(100);
	if (desFD)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", curFD),
			exit(100);
	return (1);
}
