#include "main.h"
#define NULL 0

/**
 * _strchr - locates first occurence of char in string and returns pointer
 * @s: string
 * @c: charater
 * Return: NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
