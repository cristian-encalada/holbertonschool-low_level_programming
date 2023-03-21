#include "3-calc.h"

/**
 * main - program that performs simple math operations
 * @argc: number of arguments (command line)
 * @argv: array that stores arguments (command line)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	(void) argc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
