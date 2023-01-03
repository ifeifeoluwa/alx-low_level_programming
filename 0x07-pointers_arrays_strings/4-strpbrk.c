#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: target
 * Return: s when found and NULL when not found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return (NULL);
}
