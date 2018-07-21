#include "holberton.h"

/**
 * _strlen - returns length of str s
 * @s: string to be measured
 * Return: length of s
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}


/**
 * _strcat - Concatanates dest and src
 * @dest: One of the strings in question
 * @src: One of the strings in question
 * Return: the concatanated string
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = _strlen(dest);
	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		*(dest + (i + len)) = *(src + i);
	}
	return (dest);
}
