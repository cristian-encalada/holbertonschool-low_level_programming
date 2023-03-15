#include "main.h"
#include <stdlib.h>
/**
* *_strncat - function that concatenates two strings.
* @src: first string (source)
* @dest: second string (destination)
* @n: number of characters to be copied
* Return: the concatenated array
*/
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	if (n >= 0)
	{
	while (*dest != '\0')
		dest++;
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	}
	else
		*dest = '\0'; /**add '\0' at the end */
	return (start);
}
/**
 * malloc_checked - allocates memory using malloc,
 * @b: input - # of int bytes to be allocated
 * Return: if malloc fails, status value = 98
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
