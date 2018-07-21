#include "holberton.h"

/**
 * _strcpy - copies str src to str pointer to dest
 * @src: source string
 * @dest: destination string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0 ; *(src + p) != '\0' ; p++)
	{
		*(dest + p) = *(src + p);
	}
	return (dest);
}
