#include "main.h"
#include <stdlib.h>
/**
* _strlen - function that swaps the values of two integers
* @s: input variable - char type working as a string
* Return: an integer after the iteration.
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
/**
* *_strcpy - function that swaps the values of two integers
* @src: input string (source to be copied)
* @dest: output string (destination array)
* Return: the copied array
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /**add '\0' at the end */
	return (start);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of parameters
 * @av: prints an array of arguments passed to the cli
 * Return: a pointer to a new string, or NULL if it fails
 *	Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* calculate length of concatenated string */
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	str = malloc(len * sizeof(char)); /* allocate memory for str */
	if (str == NULL) /* check if allocation was successful */
		exit(1);
	/* concatenate the strings */
	for (i = 0, j = 0; i < ac; i++)
	{
		_strcpy(str + j, av[i]);
		j += _strlen(av[i]);
		str[j++] = '\n';
	}
	str[len - 1] = '\0'; /* null-terminate the string */
	return (str);
}
