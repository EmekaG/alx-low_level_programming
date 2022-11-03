#include <stdio.h>
#include <main.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * close_fd - closes file descriptors
 * @fd: the file descriptors to be closed
 */
void close_fd(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the contents of a file to another file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * desc: If the argument count is incorrect - exit code 97
 *       If file_from does not exist or cannot be read - exit code 98
 *       If file_to cannot be created or written to - exit code 99
 *       If file_to or file_from cannot be closed - exit code 100
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ofrom, oto, cfrom, cto, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ofrom = open(*(argv + 1), O_RDONLY);
	if (ofrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);

	oto = open(*(argv + 2), O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (oto == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

	while ((r = read(ofrom, buffer, 1024)) > 0);
	{
		buffer[r] = '\0';
		
		w = write(oto, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		}
	}
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	cfrom = close(ofrom);
	if (cfrom == -1)
		close_fd(ofrom);
	cto = close(oto);
	if (cto == -1)
		close_fd(oto);
	return (0);
}
