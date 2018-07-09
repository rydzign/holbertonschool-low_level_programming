/**
 * rot13 - rot13's a string s
 * @s: string to be rot13'd
 * Return: rot13'd string
 */

char *rot13(char *s)
{
	int i, j;
	char *key = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *val = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		j = 0;
		for ( ; key[j] != '\0' ; j++)
		{
			if (s[i] == key[j])
			{
				*(s + i) = *(val + j);
				break;
			}
		}
	}
	return (s);
}
