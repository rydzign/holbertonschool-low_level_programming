#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: accepted variable
 * Return: 1 if c is uppercase
 * otherwise Return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
