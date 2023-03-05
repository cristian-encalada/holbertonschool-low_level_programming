#include "main.h"
/**
* set_string - function that sets the value of a pointer to a char
* @s: pointer
* @to: input char array (string)
* Return: pointer s set to the start of *to
*/
void set_string(char **s, char *to)
{
	*s = to;
}
