#include "main.h"

/**
 * main - prints_alphabets -  prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void);
{
	char alphabet = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (alphabet < 123)
		{
			_putchar(alphabets);
			alphabets++;
		}
		alphabet = 'a';
		_putchar(10);
		counter++;
	}
}
