#include "main.h"

/**
 * append_text_to_file - Function
 * @filename: Name of the target file
 * @text_content: adding this text in a file
 * Return: Success (1) Error (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	char *copy;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND, 0664);

	if (file == -1)
		return (-1);

	read(file, &copy, 1);
	write(file, text_content, strlen(text_content));

	return (1);
}
