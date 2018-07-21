#include <stdio.h>
#include "holberton.h"

/**
 * _memset - fills memoory with constant bytes of n
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
