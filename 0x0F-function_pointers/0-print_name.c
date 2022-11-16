#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function to print a name
 * @name: pointer of char type
 * @f: pointer to function
 * Return: Always successful
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}
