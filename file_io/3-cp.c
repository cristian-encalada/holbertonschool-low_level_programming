#include "main.h"

void copy_content(const char *file_from, const char *file_to);
/**
 * main - Copies content of a file to another
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s cp file_from file_to\n", argv[0]);
	exit(97);
	}
	copy_content(argv[1], argv[2]);
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
void copy_content(const char *file_from, const char *file_to)
{
	ssize_t open_f1, open_f2, r, w;
	char buffer[1024];

	open_f1 = open(file_from, O_RDONLY);
	if (open_f1 == -1 || file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	open_f2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	r = read(open_f1, buffer, 1024);	/* # of bytes read (file 1) */
	w = write(open_f2, buffer, r);		/* # of bytes written */
	while (r > 0)
	{
		if (w == -1 || open_f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}
	if (close(open_f1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", open_f1), exit(100);
	if (close(open_f2))
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", open_f2), exit(100);
}
