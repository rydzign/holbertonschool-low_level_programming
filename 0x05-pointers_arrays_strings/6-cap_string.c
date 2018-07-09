/**
 * cap_string - capitalizes each word in string s.
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				switch (s[i - 1])
				{
				case 9:
				case 32:
				case 33:
				case 34:
				case 40:
				case 41:
				case 44:
				case 46:
				case 59:
				case 63:
				case 123:
				case 125:
				case '\n':
					s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
