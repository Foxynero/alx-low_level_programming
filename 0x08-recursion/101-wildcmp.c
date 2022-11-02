#include "main.h"

/**
 * wildcmp - Compares two strings with * wildcards. Sets initial search mode.
 *
 * @s1: first string, does not have *
 * @s2: second string, has *
 *
 * Return: 1 if identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildmode(s1, s2));
	return (exactmode(s1, s2));
}
