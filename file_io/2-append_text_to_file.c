#include "main.h"

int _strlen(const char *s);
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the input file
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 *	- Do not create the file if it does not exist
 *	- if filename is NULL return -1
 *	- If text_content is NULL, do not add anything to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = _strlen(text_content);

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	if (close(o) == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - Gets the length of a string
 * @s: String being evaluated
 * Return: Length of string or 0 if it fails
 */
int _strlen(const char *s)
{
	size_t i = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i]; i++)
		;
	return (i);
}
