#include "main.h"
/**
* *_strchr - function that locates a character in a string.
* @s: input string
* @c: character to be located
* Return: a pointer to the first occurrence of the character c in the string
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	char *aux = s;

	while (*aux != '\0')
	{
		if (*aux == c)
		{
			return (aux);
		}
	aux++;
	}
	return ('\0');
}
