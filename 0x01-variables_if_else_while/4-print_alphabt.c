#include <stdio.h>

/*
 * main - Entry point
 * The program prints the alphabet in lowercase, except letters e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z'; ch++)
if (ch == 'e' || ch == 'q')
{;}
}
else{
putchar(ch);
}
putchar('\n');
return (0);
}
