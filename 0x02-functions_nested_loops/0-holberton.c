#include "holberton.h"

/**
 * main - Entry point
 * program that prints Holberton
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char print[] = "Holberton";

for (i = 0; i < 10; i++)
{
_putchar(print[i]);
}
_putchar('\n');
return (0);
}
