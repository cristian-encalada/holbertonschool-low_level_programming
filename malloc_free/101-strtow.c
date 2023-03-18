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
 * count_words - Counts the number of words in a string
 * @str: The string to count the words of
 *
 * Return: The number of words in @str
 */
int count_words(char *str)
{
	int i, count = 0;
	char prev_char = ' ';

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (prev_char == ' ' && str[i] != ' ')
			count++;
		prev_char = str[i];
	}
	if (count == 0)
		return (0);
	else
		return (count);
}
/**
 * free_words - Frees an array of strings
 * @words: The array of strings to free
 * @size: The size of the array
 *
 * Return: Nothing
 */
void free_words(char **words, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(words[i]);
	free(words);
}
/**
 * strtow - function that splits a string into words
 * @str: input string
 * Return: A pointer to an array of strings (words)
 *	Returns NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;

	if (str == NULL  || str[0] == '\0')
		return (NULL);
	if (count_words(str) == 0)
		return (NULL);
	len = _strlen(str);
	words = malloc((count_words(str) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < len; ++i)
	{
		if (str[i] != ' ')
		{
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
			++j;
		words[count] = malloc((j - i + 1) * sizeof(char));
		if (words[count] == NULL)
		{
			free_words(words, count);
			return (NULL);
		}
		for (k = 0; k < j - i; ++k)
		words[count][k] = str[i + k];
		words[count][k] = '\0';
		++count;
		i = j;
		}
	}
	words[count] = NULL;
	return (words);
}
