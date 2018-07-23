#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints single digit numbers of base 10
 * Return: 0
 */

int main()
{
	int i;

	for(i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return 0;
}
