#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int);

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	void *p;

	p = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", p);
	return (0);
}
