#include "holberton.h"

/**
 * print_numbers - function to print 0 to 9 then newline
 * Return: 0
 */

void print_numbers(void)
{
	int p;

	for (p = '0' ; p <= '9' ; p++)

		_putchar(p);
	_putchar('\n');
}
