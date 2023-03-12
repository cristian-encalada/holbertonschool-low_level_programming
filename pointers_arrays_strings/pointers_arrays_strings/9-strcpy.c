#include "main.h"
/**
* *_strcpy - function that swaps the values of two integers
* @src: input string (source to be copied)
* @dest: output string (destination array)
* Return: the copied array
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /**add '\0' at the end */
	return (start);
}
