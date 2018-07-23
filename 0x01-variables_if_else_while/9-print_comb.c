#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints single digit numbers seperated by ,
 * Return: 0
 */

int main()
{
	int i;

	for(i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	if(i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return 0;
}
