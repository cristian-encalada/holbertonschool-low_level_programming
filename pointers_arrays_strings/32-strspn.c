#include "main.h"

char *_strchr(char *, char);

/**
* _strspn - function that gets the length of a prefix substring
* @s: input string
* @accept: increases 1 if the character is found in the string
* Return: the number of characters present in the string
*/
unsigned int _strspn(char *s, char *accept)
{
    int count = 0;
    char *ptr;

    for (; *s != '\0'; s++)
    {
        ptr = _strchr(accept, *s);
        if (ptr == NULL)
            return (count);
        count++;
    }
    return (count);
}

char *_strchr(char *s, char c)
{
    for (; *s != '\0'; s++)
    {
        if (*s == c)
            return (s);
    }
    if (*s == c)
        return (s);
    else
        return ('\0');
}
