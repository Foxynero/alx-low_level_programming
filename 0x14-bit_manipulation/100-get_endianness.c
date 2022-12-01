#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 * If little-endian - 1.
 */

int get_endianness(void)
{
	int num;
	char *adrs;

	num = 2;
	adrs = (char *)&num;
	if (*adrs)
		return (1);
	return (0);
}
