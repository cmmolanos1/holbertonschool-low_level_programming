#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file to be readed
 * @text_content: the text inside the file.
 * Return: 2 success, otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (file == -1)
	{
		write(STDERR_FILENO, "fails", 5);
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; *(text_content + i) != '\0'; i++)
			;
		write(file, text_content, i);
	}
	else
	{
		write(file, "", 0);
		return (-1);
	}
	close(file);
	return (1);
}