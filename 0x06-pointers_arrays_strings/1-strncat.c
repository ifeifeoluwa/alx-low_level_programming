#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 * Return: returns destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, j;

	while (dest[l] != '\0')
		l++;

	for (j = 0; j < n && src[j] != '\0'; j++, l++)
		dest[l] = src[j];
	dest[l] = '\0';
	return (dest);
}
