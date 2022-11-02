#include "main.h"

/**
 * is_palindrome - returns if string is palindrome or not
 *
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_finder(s, len - 1));
}
