#include "holberton.h"

/**
 * append_text_to_file - function to append tect into a file
 * @filename: the pointer of the file
 * @text_content: the text to append
 * Return: 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		close(x);
		return (1);
	}
	for (z = 0; text_content[z] != '\0'; z++)
		;
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
