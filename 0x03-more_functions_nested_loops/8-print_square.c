#include "holberton.h"

/**
 * print_square - prints square size size
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int i, i2;

	for (i = 0 ; i < size ; i++)
	{
		for (i2 = 0 ; i2 < size ; i2++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
