#include "holberton.h"

/**
 * main - Entry point
 * _isalpha - function that checks for lowercase character.
 * @c: string to print
 * Return: 1 if c if letter
 * otherwise Return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
