#include "main.h"
/**
* *leet - function that encodes a string into 1337..
* @str: input string
* Return: the string converted
*/
char *leet(char *str)
{
	int i, j;
	char aux[] = "aAeEoOtTlL";
	char aux2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		if (str[i] == aux[j])
			str[i] = aux2[j];
	}
	return (str);
}
