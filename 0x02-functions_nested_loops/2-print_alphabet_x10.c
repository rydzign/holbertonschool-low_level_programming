#include <holberton.h>

/**
 * main - Entry point
 * program to print Holberton
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0 ; i < 10 ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
