#include "main.h"

/**
 * create_file - Function
 * @filename: Name of the target file
 * @text_content: write this content in a file
 * Return: 1: Success -1: Error
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	write(file, text_content, strlen(text_content));
	close(file);
	return (1);
}
