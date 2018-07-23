#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints the alphabet in lowercase except q and e
 * Return: 0
 */

int main()
{
	int i;

	for(i = 'a' ; i <= 'z' ; i++)
		if(i != 'q' && i != 'e')
	{
	putchar(i);
	}
	putchar('\n');
	return 0;
}
