#include "holberton.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to print
 * p: count forward
 * q: count back
 * a: int
 * Return: void
 */

void rev_string(char *s)
{
	int p = 0, a, q = 0;

	while (*(s + p) != '\0')
	{
		p++;
	}
	for (a = 0 ; a <= ((p - 1) / 2) ; a++)
	{
		q = *(s + a);
		*(s + a) = *(s + (p - (a + 1)));
		*(s + (p - (a + 1))) = q;
	}
}
