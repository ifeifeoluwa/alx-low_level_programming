#include "main.h"

/**
 * leet - this function encodes a string into 1337
 * @s: pointer to string
 * Return: s
 */

char *leet(char *s)
{
	int sc = 0, lc = 0;
	char ll[] = "aAeEoOtTlL";
	char ln[] = "4433007711";

	while (s[sc] != '\0')
	{
		while (lc < 10)
		{
			if (ll[lc] == s[lc])
				s[sc] = ln[lc];
		}
		sc++;
	}
	return (s);
}
