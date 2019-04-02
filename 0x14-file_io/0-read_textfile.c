#include "holberton.h"

/**
 * read_textfile - function to read and write a file
 * @filename: the pointer to the file
 * @letters: the size to read and write
 * Return: the numbers of the characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, size, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	size = read(file, buf, letters);

	wr = write(STDOUT_FILENO, buf, size);

	if (file == -1 || size == -1 || wr == -1)
		return (0);
	close(file);

	return (size);
}
