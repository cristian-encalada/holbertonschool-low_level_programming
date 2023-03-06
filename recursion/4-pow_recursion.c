#include "main.h"
/**
 * _pow_recursion - function that returns the natural square root of a number.
 * @x: input number
 * @y: pow number
 * Return: size of the string (int)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
