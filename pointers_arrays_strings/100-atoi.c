#include "main.h"
/**
* _atoi - function that convert a string to an integer
* @s: input string to be converted
* Return: num = the converted string
*/
int _atoi(char *s)
{
	int num = 0;
	char digit;

	while ((digit = *s++) != '\0')
	{
		if (digit < '0' || digit > '9')
		{
			return (num);  /* No valid conversion possible */
		}
	num *= 10;
	num += digit - '0';
	}
	return (num);
}
