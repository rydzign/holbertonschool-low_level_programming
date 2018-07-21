#include "holberton.h"

/**
 * _islower - function that checks for lowercase character.
 * Return: 1 if c is lowercase
 * otherwise Return 0
 * @c: int to run string
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
