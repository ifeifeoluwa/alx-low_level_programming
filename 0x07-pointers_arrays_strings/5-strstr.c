#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: target substring
 * Return: retuns a pointer to the beginning if the locatee substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
					j++, k++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
