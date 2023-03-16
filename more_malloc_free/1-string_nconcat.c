#include "main.h"
#include <stdlib.h>
/**
 * _strlen - function that swaps the values of two integers
 * @s: input variable - char type working as a string
 * Return: an integer after the iteration.
 */
int _strlen(char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
/**
* *_strncat - function that concatenates two strings.
* @src: first string (source)
* @dest: second string (destination)
* @n: number of characters to be copied
* Return: the concatenated array
*/
char *_strncat(char *dest, char *src, int n)
{
	char *aux = dest;

	if (n < 0)
		return (dest);
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
	*dest = '\0';
	return (aux);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: number of characters to be concatenated (s2)
 * Return: if malloc fails, status value = 98
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = s1;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		ptr = malloc((len1 + len2 + 1) * sizeof(char));
		if (ptr == NULL)
			exit(1);
	}
	else
	{
		ptr = malloc((len1 + n + 1) * sizeof(char));
		if (ptr == NULL)
			exit(1);
	}
	_strncat(ptr, s1, len1);
	_strncat(ptr, s2, n);
	return (ptr);
}
