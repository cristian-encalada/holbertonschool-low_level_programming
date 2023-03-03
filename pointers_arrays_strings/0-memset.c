#include "main.h"
/**
* *_memset - function that fills memory with a constant byte.
* @s: input string
* @b: constant byte
* @n: bytes of the memory areabytes of the memory area
* Return: the concatenated array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		s[count] = b;
		count++;
		n--;
	}
	return (s);
}
