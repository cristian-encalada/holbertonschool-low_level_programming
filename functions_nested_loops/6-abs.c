#include "main.h"
/**
* _abs - checks for alphabetic character.
* @n: Returns absolute value if # is negative
* @n: Returns same # if # is positive
* Return: 0 at the end if no errors
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
