# include "main.h"
/**
* _isdigit - checks for a digit (0 through 9).
* @c: Returns 1 if the input is a digit
* @c: Returns 0 if the input is not a digit.
* Return: 0 at the end if no errors
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
