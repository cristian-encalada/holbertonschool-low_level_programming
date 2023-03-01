#include "main.h"
/**
* _atoi - function that convert a string to an integer
* @s: input string to be converted
* Return: num = the converted string
*/
int _atoi(char *s)
{
	int num = 0;
	char *digit = s;
	
	while((*digit >= '0') && (*digit <= '9'))
	{
		num = num * 10 + (*digit - '0');
		digit++;
	}
	return (num);
} 
