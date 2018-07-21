#include <stdio.h>
#include "holberton.h"

/**
 * _print_rev_recursion - use recursion to print reveversly the string
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
