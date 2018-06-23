#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

in main(void)
{
char ch;
for (ch = '0' ; ch <= '9'; ch++)
putchar(ch);
ch = 'a';
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
