#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create (output)
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *	- The created file must have those permissions: rw-------
 *	- if the file already exists, truncate it
 *	- if filename is NULL return -1
 *	- if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * size_content);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || (ssize_t)w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
