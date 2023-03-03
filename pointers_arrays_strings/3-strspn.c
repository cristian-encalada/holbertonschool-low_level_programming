#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: input string
* @accept: increases 1 if the character is found in the string
* Return: the number of characters present in the string
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, count_s = 0;

	for (; *s != '\0'; s++)
	{
		count_s++;
		for (; *accept == *s; accept++)
		{
			count++;
			s = s - count_s;
			count_s = 0;
		}
	}
	return (count);
}
