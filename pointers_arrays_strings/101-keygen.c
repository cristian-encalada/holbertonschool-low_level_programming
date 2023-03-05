#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * checksum - Error detection mechanism that detects the error
 *		in the data/message in a data communication
 * @str: input string
 * Return: Sum of all ASCII values in the string
 */
unsigned int checksum(char *str)
{
	unsigned int add = 0;

	while (*str)
		add += *str++;
	return (add);
}
/**
 * main - Program that generates random valid passwords
 * for the program 101-crackme.
 * Return: 0 if no errors
 * Check the disassembled.s for more info about 101-crackme
 */
int main(void)
{
	int i;
	char str[32]; /**Size is 32 because assembly code is cmp DWORD PTR*/
	unsigned int add;

	srand(time(0));
	do {
	for (i = 0; i < 32; i++)
		str[i] = rand() % 94 + 32; /** Print just visible ASCII chars*/
	str[32] = '\0';
	add = checksum(str);
	} while (add != 2772); /** 0AD4h in decimal is 2772 */
	printf("%s", str);
	return (0);
}
