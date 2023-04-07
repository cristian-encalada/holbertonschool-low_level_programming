#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer  to a string of 0 and 1 chars
 * Return: the converted number,
 *	- 0 if there are chars that are not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if ((b[len] == '0') || (b[len] == '1'))
		{
			num <<= 1;
			num += b[len] - '0';
			len++;
		}
		else
			return (0);
	}

	return (num);
}
