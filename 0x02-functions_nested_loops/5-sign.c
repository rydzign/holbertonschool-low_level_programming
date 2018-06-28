#include "holberton.h"

/**
 * main - Entry point
 * function that prints the sign of a number.
 * Return: 1 and print + if > 0
 * Return: 0 and print 0 if 0
 * Return: -1 and print - if < 0
 */

int print_sign(int n);
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else (n < 0)
{
_putchar('-')
return (0);
}
}
