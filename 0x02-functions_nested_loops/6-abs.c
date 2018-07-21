#include "holberton.h"

/**
 * _abs - function that computes absolute value
 * @n: string to print
 * Return: void
 */

int _abs(int n)
{
	if (n > 0)
{
	return (n);
}
	else
	{
		n = (n * -1);
		return (n);
	}
}
