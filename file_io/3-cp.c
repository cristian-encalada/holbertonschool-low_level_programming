#include "main.h"

void close_file(int fd);
/**
 * main - copy content from a file to another file
 * @argc: number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments
 * Return: 0 on success
 *	- if the number of argument is not the correct one, exit with code 97
 *	- if the file already exists, truncate it
 *	- if file_from does not exist, or if you can not read it, exit with code 98
 *	- if you can not create or if write to file_to fails, exit with code 99
 *	- if you can not close a file descriptor , exit with code 100
 */
int main(int argc, char *argv[])
{
	ssize_t open_f1, open_f2, r, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	open_f1 = open(argv[1], O_RDONLY);
	r = read(open_f1, buffer, 1024);        /* # of bytes read from file 1 */
	if (open_f1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open_f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		w = write(open_f2, buffer, r);          /* # of bytes written to file 2 */
		if (w != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		r = read(open_f1, buffer, 1024);        /* Update # of bytes read */
	}
	close_file(open_f1);
	close_file(open_f2);
	return (0);
}
/**
 * close_file - close a file descriptor
 * @fd: file descriptor to be closed
 */
void close_file(int fd)
{
	int cf;

	cf = close(fd);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
