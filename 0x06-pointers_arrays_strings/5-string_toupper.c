#include "main.h"

/**
 * string_toupper - this function changes all lowercase letters of a
 * string to uppercase
 * @n: pointer to string
 * Return: uppercase string
 */

char *string_toupper(char *n)
{
	int l = 0;

	while (n[l] != '\0')
	{
		if (n[l] >= 97 && n[l] <= 122)
			n[l] = n[l] - 32;
		l++;
	}
	return (n);
}
