#include "main.h"

int _strlen(const char *s);
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
	int o, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = _strlen(text_content);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

/**
 * _strlen - Gets the length of a string
 * @s: String being evaluated
 * Return: Length of string or 0 if it fails
 */
int _strlen(const char *s)
{
	size_t i;

	if (s == NULL)
		return (0);

	for (i = 0; s[i]; i++)
		;
	return (i);
}
