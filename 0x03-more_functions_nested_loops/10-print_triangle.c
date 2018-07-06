#include "holberton.h"

/**
 * print_triangle - prints triangle size size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, i2;

	for (i = 0 ; i < size ; i++)
	{
		for (i2 = 0 ; i2 < size ; i2++)
		{
			if ((i + i2) >= (size - 1))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
