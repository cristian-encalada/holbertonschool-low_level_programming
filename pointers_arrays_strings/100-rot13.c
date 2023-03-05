#include "main.h"
/**
* *rot13 - function that encodes a string using rot13
* @str: input string
* Return: the string converted
*/
char *rot13(char *str)
{
	int i, j;
	char aux[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char aux2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; aux[j] != '\0'; j++)
			if (str[i] == aux[j])
			{
				str[i] = aux2[j];
				break;
			}
	}
	return (str);
}
