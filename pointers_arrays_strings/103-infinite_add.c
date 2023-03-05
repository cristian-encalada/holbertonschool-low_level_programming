#include "main.h"
/**
  * _atoi - function that convert a string to an integer
  * @s: input string to be converted
  * Return: num = the converted string
*/
int _atoi(char *s)
{
	unsigned int num = 0;

	for (; *s != '\0'; s++)
		if (*s >= '0' && *s <= '9')
			num = (*s - '0') + (num * 10);
	return (num);
}
/**
 * *infinite_add - function that adds two numbers.
 * @n1: input 1 (numbrt)
 * @n2: input 2 (numbrt)
 * @r: buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: a pointer to the result
 * Assumptions:
 * n1 and n2 will always be positive numbers, or 0
 * there will be only digits in the strings n1 and n2
 * n1 and n2 will never be empty
 * If the result can not be stored in r the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1 = _atoi(n1);
	int num2 = _atoi(n2);
	int res = num1 + num2;
	int i = 0, j, k;
	char c;

	do {
		r[i] = (res % 10) + '0';
		res /= 10;
		i++;
	}
	while (res > 0 && i < size_r);

	if (res > 0 || i >= size_r)
		return (0);
	r[i] = '\0';
	for (j = 0, k = i - 1; j < k; j++, k--)
	{
	c = r[j];
	r[j] = r[k];
	r[k] = c;
	}
	return (r);
}
