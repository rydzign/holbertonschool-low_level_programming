#include "holberton.h"

/**
 * puts_half - prints the second half of string str
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int p = 0, a;

	while (*(str + p) != '\0')
	{
		p++;
	}
	for (a = 0 ; a < p ; a++)
	{
		if (a > (p - 1) / 2)
			_putchar(*(str + a));
	}
	_putchar('\n');
}
