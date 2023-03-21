#include "3-calc.h"

/**
 * main - Gets input from user, converts to int, and passes to get_op_func
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	(void) argc;

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
