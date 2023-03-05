#include "main.h"
#include <string.h>
/**
* rev_string - function that reverses a string
* @s: string variable to be reverted
* Return: void.
*/
void rev_string(char *s)
{
	int length = 0, i = 0;
	char *begin_ptr, *end_ptr, swap;

	/** Get the length of the string */
	length = strlen(s);
	/** Setting the begin_ptr to the start of the string */
	begin_ptr = s;
	/** Setting the end_ptr to the end of the string */
	end_ptr = s + length - 1;
	/** Swap the char from start and end */
	for (i = 0; i < (length + 1) / 2; i++)
	{
	/** Swap character */
	swap = *end_ptr;
	*end_ptr = *begin_ptr;
	*begin_ptr = swap;
	/** update pointers positions */
	begin_ptr++;
	end_ptr--;
	}
}
