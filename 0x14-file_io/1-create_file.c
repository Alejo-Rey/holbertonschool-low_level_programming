#include "holberton.h"

/**
 * create_file - function to create and write the file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 if its success
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

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
