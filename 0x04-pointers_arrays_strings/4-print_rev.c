#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @str: string to print
 * p: count forward
 * q: count back
 * Return: void
 */

void print_rev(char *str)
{
	int p = 0, q;

	while (*(str + p) != '\0')
	{
		p++;
	}
	q = p;
	while (p >= 0)
	{
		if (*(str + p) != '"' && q != p)
			_putchar(*(str + p));
		p--;
	}
	_putchar('\n');
}
