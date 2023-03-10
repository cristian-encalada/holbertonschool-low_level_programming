#include "main.h"
/**
 * _strlen - aux function to know the length of a string
 * @s: input string
 * Return: Length of the sting (int).
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
 * is_palindrome - function that verifies if a string is a palindrome
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	char *start = s;
	char *end = s + _strlen(s) - 1;

	while (start < end)
	{
		if (*start != *end)
			return (0);
		start++;
		end--;
	}
	return (1);
}
