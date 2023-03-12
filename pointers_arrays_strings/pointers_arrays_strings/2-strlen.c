#include "main.h"
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
