#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints the alphabet in lowercase
 * Return: 0
 */

int main()
{
	int i;

	for(i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return 0;
}
