#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * prints numbers 00 to 99 seperated by ,
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int i2;
	int j2;

	i2 = '0';
	j2 = '0';
	for(i = '0' ; i <= '9' ; i++)
	{
		for(j = '0' ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);
			if(i != '9' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
			if(j2 == '9')
			{
				j2 = '0';
			}
			else
			{
				j2++;
			}
		}
		i2++;
	}
	putchar('\n');
	return 0;
}
