#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int _putchar(); // function prototype
int main(void)
{
	_putchar(); // function called in int main(void)
	
	return 0;
}

// defining _putchar function
int _putchar()
{
	puts("_putchar \n");

	return 0;
}