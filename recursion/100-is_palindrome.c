#include "main.h"
/**
 * _strlen - aux function to know the length of a string
 * @s: input string
 * Return: Length of the sting (int).
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * verify_palindrome - function that verifies if a string is a palindrome
 * @s: input string
 * @size: string size
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int verify_palindrome(char *s, int size)
{
	/* base case: empty or single-character string is a palindrome */
	if (size <= 1)
		return (1);

	/* check if first and last characters match */
	if (*s != *(s + size - 1))
		return (0);

	/* recursive call */
	return (verify_palindrome(s + 1, size - 2));
}
/**
 * is_palindrome - function that verifies if a string is a palindrome
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	/* recursive call */
	return (verify_palindrome(s, len));
}
