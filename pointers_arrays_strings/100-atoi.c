#include "main.h"
/**
* _atoi - function that convert a string to an integer
* @s: input string to be converted
* Return: num = the converted string
*/
int _atoi(char *s)
{
	int num = 0, neg = 1;
	char *digit = s, size = 0;
	
	while (*digit == '-')
	{
		neg = neg * (-1);
		digit++;
		size++;
	}
	digit = digit - size;	
	while((*digit >= '0') && (*digit <= '9'))
	{
		num = num * 10 + (*digit - '0');
		digit++;
	}
	return (num * neg);
} 
