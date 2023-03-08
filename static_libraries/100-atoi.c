#include "main.h"
/**
* _atoi - function that convert a string to an integer
* @s: input string to be converted
* Return: num = the converted string
*/
int _atoi(char *s)
{
	unsigned int num = 0;
	int neg = 1;

	for (; *s != '\0'; s++)
	{
		if (*s >= '0' && *s <= '9')
			num = (*s - '0') + (num * 10);
		else if (num > 0) /** Controls the spaces after the first # found*/
			break;
		else if (*s == '-')
			neg = neg * (-1);
	}
	return (num * neg);
}
