#include "main.h"
/**
* _strcmp - function that compares two strings.
* @s1: input string 1
* @s2: input string 2
* Return: 0 if the strings are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
