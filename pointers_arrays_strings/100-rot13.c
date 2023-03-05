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
		if (str[i] >= 'A' || str[i] <= 'Z' || str[i] >= 'a' || str[i] <= 'z')
		{
			for (j = 0; aux[j] != '\0'; j++)
				if (str[i] == aux[j])
				{
					str[i] = aux2[j];
					break;
				}
		}
		else
			i++;
	}
	return (str);
}
