#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

in main(void)
{
char ch = '0';
int count = 1;
while (count < 17)
{
if ((ch >= '0' && ch <= '9') || (ch = 'a' && ch <= 'f'))
{
putchar(ch);
count++;
}
ch++;
}
putchar('\n');
return (0);
}
