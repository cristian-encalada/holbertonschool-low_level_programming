#include <stdio.h>
#include "main.h"
/**
 * print_buffer - function that prints a buffer
 * @b: input string
 * @size: bytes of the buffer pointed by b
*/
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{/** Position of the first byte of the line in hexadecimal (8 chars) */
		printf("%08x: ", i);
		for (j = 0; j < 10 && i + j < size; j++)
		{ /**hexadecimal content (2 chars) of the buffer*/
			printf("%02x", b[i + j]);
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
	for (; j < 10; j++)
	{
		printf("  ");
	if (j % 2 == 1)
		printf(" ");
	}
	/**content of the buffer. If the byte is a printable character*/
	for (j = 0; j < 10 && i + j < size; j++)
	{
		if (b[i + j] >= 32 && b[i + j] <= 126)
			printf("%c", b[i + j]);
		else
			printf(".");
	}
		printf("\n");
	}
}
