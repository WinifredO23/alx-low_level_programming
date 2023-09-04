#include "main.h"
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	return (97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
	return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	return (99);
	}
	for (; (bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0;)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		close(fd_to);
		return (99);
	}
	}
	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
	close(fd_from);
	close(fd_to);
	return (98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd\n");
	return (100);
	}
	return (0);
}
