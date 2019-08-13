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

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; *(text_content + i) != '\0'; i++)
		;
	write(file, text_content, i);
	close(file);
	return (1);
}
