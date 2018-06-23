#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
int ch;
int v;
int s;
for (ch = '0' ; ch <= '9'; ch++)
{
putchar(ch);
if (ch != '9')
{
v = ',';
s = ' ';
putchar(v);
putchar(s);
}
{
putchar('\n');
return (0);
}
