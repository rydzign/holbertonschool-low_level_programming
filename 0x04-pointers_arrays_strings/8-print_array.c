#include <stdio.h>

/**
 * print_array - prints n number of elements from array a
 * @a: array to print
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0 ; p < n ; p++)
	{
		if (p == n - 1)
			printf("%d", *(a + p));
		else
			printf("%d, ", *(a + p));
	}
	printf("\n");
}
