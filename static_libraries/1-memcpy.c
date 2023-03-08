#include "main.h"
/**
* *_memcpy - function that copies memory area.
* @src: source area
* @dest: destination area
* @n: bytes of the memory area to be copied
* Return: the destination area (copied)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
