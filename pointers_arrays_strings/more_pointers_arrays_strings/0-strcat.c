#include "main.h"
/**
* _strcat - function that concatenates two strings.
* @src: first string (source)
* @dest: second string (destination)
* Return: the concatenated array
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /**add '\0' at the end */
	return (start);
}
