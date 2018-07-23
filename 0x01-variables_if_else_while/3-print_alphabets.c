#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints the alphabet in lowercase then uppercase
 * Return: 0
 */

int main()
{
	int i;
	int j;

	for(i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	for(j = 'A' ; j <= 'Z' ; j++)
        {
		putchar(j);
	}
	putchar('\n');
	return 0;
}
