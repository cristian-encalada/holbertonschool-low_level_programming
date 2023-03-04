#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: input string (an array 8x8)
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y; /** counts for rows and columns*/

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
