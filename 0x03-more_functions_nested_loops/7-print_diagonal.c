#include "holberton.h"

/**
 * print_diagonal - prints diagonal size n
 * @n: size of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, i2;

	for (i = 0 ; i < n ; i++)
	{
		for (i2 = 0 ; i2 < i ; i2++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
