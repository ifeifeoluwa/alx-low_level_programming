#include "main.h"

/**
 * _memcpy - copies n bytes from one memory area to another
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
