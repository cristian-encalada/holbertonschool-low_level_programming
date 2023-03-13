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

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count + 1); /** +1 to include the \0 character*/
}
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
/**
 * str_concat - function that concatenates two strings.
 * @s1: input string 1
 * @s2: input string 1
 * Return: On success, returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	char *aux_pointer;
	int len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	aux_pointer = malloc((len1 + len2) * sizeof(char));
	if (aux_pointer == NULL)
		exit(1);
	aux_pointer = _strcat(aux_pointer, s1);
	aux_pointer = _strcat(aux_pointer, s2);
	return (aux_pointer);
}
