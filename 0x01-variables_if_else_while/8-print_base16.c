#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints base 16 in lowercase
 * Return: 0
 */

int main()
{
	int i;
	int j;

	for(i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	}
	for(j = 'a' ; j <= 'f' ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return 0;
}
