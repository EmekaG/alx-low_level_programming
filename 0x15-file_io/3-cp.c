#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_fd(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @filename: the name of the file to that holds the buffer
 *
 * Return: a pointer to the new buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDEER_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_fd - closes file descriptors
 * @fd: the file descriptors to be closed
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(*(argv + 2));
	from = open(*(argv + 1), O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(*(argv + 2), O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error:Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], 0_WRONLY | O_APPEND);

	} while (r > o);

	free(buffer);
	close_fd(from);
	close_fd(to);

	return (0);
}
