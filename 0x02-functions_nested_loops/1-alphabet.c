#include <holberton.h>

/**
 * main - Entry point
 * program to print Holberton
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
