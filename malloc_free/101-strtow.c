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
* *_strchr - function that locates a character in a string.
* @s: input string
* @c: character to be located
* Return: a pointer to the first occurrence of the character c in the string
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return (s);
	else
		return ('\0');
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
 * strtow - function that splits a string into words
 * @str: input string
 * Return: A pointer to an array of strings (words)
 * 	Returns NULL if str == NULL or str == ""
 */
char **strtow(char *str) 
{
	int len = _strlen(str);
	int *count = 0; /* number of substrings */
  /* We make one pass of the string to first determine how many substrings 
   we'll need to create, so we can allocate space for a large enough array 
   of pointer to strings.  The variable i will keep track of our current 
   index in the string */
	int i = 0, old_i, j = 0, string_index = 0, to_allocate;
	char **strings;
	char buffer[16384];
	char *seperators = " ";
	while (i < len)
	{
    /* skip over the next group of separator characters */
		while (i < len)
		{
      /* keep incrementing i until the character at index i is NOT found in the 
      separators array, indicating we've reached the next substring to create  */
		if (_strchr(seperators, str[i]) == NULL)
			break;
		i++;
		}
    /* skip over the next group of substring (i.e. non-separator characters), 
    we'll use old_i to verify that we actually did detect non-separator 
    characters (perhaps we're at the end of the string) */
	old_i = i;
	while (i < len)
	{
	/*  increment i until the character at index i IS found in the separators 
       array, indicating we've reached the next group of separator 
       character(s) */
	if (_strchr(seperators, str[i]) != NULL)
		break;
	i++;
	}
    /* if we did encounter non-seperator characters, increase the count of 
     substrings that will need to be created  */
	if (i > old_i) *count = *count + 1;
	}
  /* allocate space for a dynamically allocated array of *count* number of 
   pointers to strings */
	strings = malloc(sizeof(char *) * *count);
  /* we'll make another pass of the string using more or less the same logic as 
  above, but this time we'll dynamically allocate space for each substring 
  and store the substring into this space */
	i = 0;
  /* buffer will temporarily store each substring, string_index will keep track 
  of the current index we are storing the next substring into using the 
  dynamically allocated array above */
	while (i < len)
	{
   /* skip through the next group of separators, exactly the same as above */
    while (i < len)
    {
      if (_strchr(seperators, str[i]) == NULL)
        break;
      i++;
    }
    /* store the next substring into the buffer char array, use j to keep 
     track of the index in the buffer array to store the next char */
    while (i < len)
    {
      if (_strchr(seperators, str[i]) != NULL)
        break;
      buffer[j] = str[i];
      i++;
      j++;
    }
    /* only copy the substring into the array of substrings if we actually 
    read in characters with the above loop... it's possible we won't if 
    the string ends with a group of separator characters! */
    if (j > 0)
    {
      /* add a null terminator on to the end of buffer to terminate the string */
      buffer[j] = '\0';
      /* calculate how much space to allocate... we need to be able to store 
       the length of buffer (including a null terminator) number of characters  */
      to_allocate = sizeof(char) *
                        (_strlen(buffer) + 1);
      /* allocate enough space using malloc, store the pointer into the strings 
       array of pointers at hte current string_index */
      strings[string_index] = malloc(to_allocate);
      /* copy the buffer into this dynamically allocated space */
      _strcpy(strings[string_index], buffer);
      /* advance string_index so we store the next string at the next index in 
       the strings array */
      string_index++;
    }
  }
  return (strings);
}
