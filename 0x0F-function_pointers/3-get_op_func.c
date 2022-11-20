#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to select operator
 *
 * @s: chat type
 * Return: always successful
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
