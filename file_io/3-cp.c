#include "main.h"

int _strlen(const char *s);
ssize_t copy_content(const char *file_from, char *file_to);
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
 /**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
        exit(97);
    }
    res = copy_content(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
/**
 * copy_content - program that copies the content of a file to another file.
 * @file_from: source file
 * @file_to: destination file
 * Return: 1 on success, -1 on failure
 *	- if the number of argument is not the correct one, exit with code 97
 *	- if the file already exists, truncate it
 *	- if file_from does not exist, or if you can not read it, exit with code 98
 *	- if you can not create or if write to file_to fails, exit with code 99
 *	- if you can not close a file descriptor , exit with code 100
 */
ssize_t copy_content(const char *file_from, char *file_to)
{
	ssize_t r, o, w, len;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);

	len = _strlen(file_to);
	o = open(file_from, O_CREAT | O_RDWR | O_TRUNC, 0664);
	r = read(o, buffer, letters);           /* # of bytes read */
	w = write(o, file_to, len);        /* # of bytes written */

	if (file_from == NULL || r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}

	if (o == -1 || w == -1)
	{
		dprintf(2, "Error: Can't write from file %s\n", av[0]);
		exit(99);
	}
	close(o);
	if (file_from == NULL || r == -1)
	{
		dprintf(2, "Error: Can't close from file %s\n", av[0]);
		exit(100);
	}
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
