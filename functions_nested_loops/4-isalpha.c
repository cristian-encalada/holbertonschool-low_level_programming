#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: Returns 1 if the input is lowercase
 * @c: Returns 0 otherwise.
 * Return: 0 at the end if no errors
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
return (0);
}
