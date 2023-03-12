#include "main.h"
/**
 * *_strstr - function that searches a string for any of a set of bytes.
 * @haystack: input string
 * @needle: substring to be searched
 * Return:  a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n; /** auxiliar pointers*/

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h && *h == *n)
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
