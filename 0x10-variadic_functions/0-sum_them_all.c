#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to add number
 * 
 * @n:number of arguments
 *
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);
	for (i = 0; sum = 0; i < n; i++)
		sum += va_arg(list, int);
	
	va_end(list);
	return (sum);
}
