#include <stdio.h>
#include "holberton.h"

/**
 * _puts_recursion - use recursion to print the string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
