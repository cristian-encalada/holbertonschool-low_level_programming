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
	char *start = dest;

	if (n > 0)
	{
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n == 0)
		while (*dest != '\0')
		{
			dest++;
		}
	*dest = '\0'; /**add '\0' at the end */
	}
	return (start);
}
