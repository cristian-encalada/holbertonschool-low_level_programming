#include "main.h"
/**
* *_strncpy - function that copies a string.
* @src: input string 1 (source to be copied)
* @dest: output string (destination array)
* @n: number of characters to be copied
* Return: the copied string in dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (n > i))
	{
		dest[i] = src[i];
		i++;
	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
