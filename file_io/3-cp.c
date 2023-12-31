#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * closeFile - Close file descriptor and exit on failure.
 * @fd: File descriptor to close.
 * @filename: Name of the file associated with the file descriptor.
 */
void closeFile(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd for %s\n", filename);
		exit(100);
	}
}

/**
 * copyFile - Copy content from source file to destination file.
 * @src: File descriptor of the source file.
 * @dest: File descriptor of the destination file.
 * @av: Command-line arguments.
 */

void copyFile(int src, int dest, char **av)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	while ((bytesRead = read(src, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(dest, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description:
 *   - Validates the number of command-line arguments.
 *   - Opens the source file in read-only mode.
 *   - Handles errors if unable to open the source file.
 *   - Opens or creates the destination file in write-only
 *   - mode, truncating if it exists.
 *   - Handles errors if unable to open or create the destination file.
 *   - Copies the content from the source file to the destination file.
 *   - Closes the source and destination files.
 *
 * Return: Always 0 (indicating successful execution).
 */
int main(int argc, char **argv)
{
	int src;
	int dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	src = open(argv[1], O_RDONLY, 0664);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closeFile(src, argv[1]);
		exit(99);
	}

	copyFile(src, dest, argv);

	closeFile(src, argv[1]);
	closeFile(dest, argv[2]);

	return (0);
}

