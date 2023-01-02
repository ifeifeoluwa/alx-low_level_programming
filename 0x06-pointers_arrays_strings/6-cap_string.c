#include "main.h"

/**
 * cap_string - capitalises every first letter of each word in a string
 * @s: pointer to string
 * Return: s
 */

char *cap_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n' || s[c] == ','
				|| s[c] == ';' || s[c] == '.' || s[c] == '!'
				|| s[c] == '?' || s[c] == '"' || s[c] == '('
				|| s[c] == ')' || s[c] == '{' || s[c] == '}')
		{
			if (s[c + 1] >= 97 && s[c + 1] <= 122)
				s[c + 1] = s[c + 1] - 32;
		}
		c++;
	}
	return (s);
}
