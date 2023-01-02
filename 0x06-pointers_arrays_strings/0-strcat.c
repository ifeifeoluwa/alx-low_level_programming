#include "main.h"

/**
 * _strcat - cancatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: returns destination
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, j;

	while (dest[l] != '\0')
		l++;
	for (j = 0; src[j] != '\0'; j++, l++)
		dest[l] = src[j];
	dest[l] = '\0';
	return (dest);
}
