#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *	the operation asked by the user
 * @s: operator passed as argument
 * Return: A pointer to the function that corresponds
 *	to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 6; i++)
	{/* strcmp returns 0 if strings are equal */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		else
			return (NULL);
	}
	return (NULL);
}
