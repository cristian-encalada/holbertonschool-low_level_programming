#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @str: input string
* @accept: increases 1 if the character is found in the string
* Return: the number of characters present in the string
*/
unsigned int _strspn(char *str, char *accept)
{
	int count = 0;

	while (*str && _strchr(accept, *str++))
		count++;
	return (count);
}
/**
* *_strchr - function that locates a character in a string.
* @s: input string
* @c: character to be located
* Return: a pointer to the first occurrence of the character c in the string
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return (s);
	else
		return ('\0');
}
