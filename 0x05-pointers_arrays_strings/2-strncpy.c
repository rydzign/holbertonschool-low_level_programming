#include "holberton.h"

/**
 * _strncpy - copies n bytes from str src to str dest
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; (src[i] != '\0') && (i < n) ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
