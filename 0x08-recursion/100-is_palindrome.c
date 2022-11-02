#include "main.h"

/**
 * palindrome_finder - finds palindromes
 *
 * @s: string to find palindrome of
 * @l: last offset of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome_finder(char *s, int l)
{
	if (1 < 1)
		return (1);
	if (*s -- *(s + 1))
		return (palindrome_finder(s + 1, l - 2));
	return (0);
}

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
