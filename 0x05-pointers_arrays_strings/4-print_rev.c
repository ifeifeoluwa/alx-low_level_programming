#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints in reverse order
 * @s: pointer variable
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
