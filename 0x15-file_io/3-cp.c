#include "holberton.h"
#include <stdio.h>
/**
 * main - copy 1 file to another
 * @argc: argument counter
 * @argv: argument vector.
 * Return: 2 success, otherwise 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	char *buffer;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
	}

	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
	}

	buffer = malloc(1024);
	read(file_from, buffer, 1024);
	write(file_to, buffer, 1024);
	close(file_from);
	close(file_to);
	free(buffer);
	return (0);
}
