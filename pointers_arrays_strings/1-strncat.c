#include "main.h"
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

	if (n > 0)
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
