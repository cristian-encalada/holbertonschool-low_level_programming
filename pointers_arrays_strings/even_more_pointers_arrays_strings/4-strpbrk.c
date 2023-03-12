#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 * @s: input string
 * @c: character to be located
 * Return: a pointer to the first occurrence of the character c in the string
 *		or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @str: input string
 * @accept: set of bytes (characters to be searched)
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *		or NULL if no such byte is found
 */
char *_strpbrk(char *str, char *accept)
{
	while (*str)
	{
		if (_strchr(accept, *str))
			return ((char *)str);
		str++;
	}
	return (0);
}
