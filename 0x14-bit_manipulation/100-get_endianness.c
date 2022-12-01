#include "main.h"

/**
 * get_endianness - function to check endianness  of  machine
 * Return: 1 if Little Endian or 0 if big Endian
 */

int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
