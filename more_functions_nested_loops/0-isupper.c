# include "main.h"
/**
* _isupper - checks for uppercase character.
* @c: Returns 1 if the input is uppercase.
* @c: Returns 0 if the input is not uppercase..
* Return: 0 at the end if no errors
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
