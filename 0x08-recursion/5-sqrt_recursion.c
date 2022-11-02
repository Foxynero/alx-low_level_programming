#include "main.h"

/**
 * _sqrt_recursion - gets natural square root of a number, if any
 *
 * @x: number to get square root of
 *
 * Return: natural square root of number, -1 otherwise
 */

int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (check_sqrt(x, 0));
}
