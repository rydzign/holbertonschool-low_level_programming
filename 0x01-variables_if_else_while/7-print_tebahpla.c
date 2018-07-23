#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints the alphabet in lowercase in reverse
 * Return: 0
 */

int main()
{
	int i;

	for(i = 'z' ; i >= 'a' ; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return 0;
}
