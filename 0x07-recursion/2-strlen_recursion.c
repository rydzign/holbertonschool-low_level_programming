#include <stdio.h>
#include "holberton.h"

/**
 * _strlen_recursion - use recursion to return length of string
 * @s: string to be printed
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*(s) == '\0')
	{
		return (0);
	}
	else
	{
		n = n + _strlen_recursion(s + 1);
		return (n);
	}
}
