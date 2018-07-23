#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int p = 0;

	while (*(str + p) != '\0')
	{
		if (*(str + p))
			_putchar(*(str + p));
		p++;
	}
	_putchar('\n');
}
