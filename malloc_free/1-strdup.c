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
	return (count);
}
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
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.,
 * @str: input string
 * Return: On success, returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *array, *aux_pointer;
	int len = 0;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);

	array = malloc(len * sizeof(char));
	if (array == NULL)
		exit(1);
	_strcpy(array, str);
	aux_pointer = array;
	return (aux_pointer);
}
