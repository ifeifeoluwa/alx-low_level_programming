#include <stdio.h>
#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: pointer dereference for counting the string length
 * Return: int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
