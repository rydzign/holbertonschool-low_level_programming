#include <stdio.h>

/**
 * main - prints sum of all natural numbers divisible by
 * 3 or 5 and less than 1024
 * Return: void
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1 ; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
