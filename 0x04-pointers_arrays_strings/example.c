#include <stdio.h>
#include "holberton.h"

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
	printf("the address of 'cc': %p\n", &cc);
	printf("the value of 'ccc': %d\n", ccc);
}
