#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: target matches
 * Return: matched string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, m = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (m);
		}
		i++;
	}
	return (m);
}
