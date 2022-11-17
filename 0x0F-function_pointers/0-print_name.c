#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 *
 * Description: prints a name using function pointers
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
