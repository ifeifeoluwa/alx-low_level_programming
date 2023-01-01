#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		for (i = 48; i <= 62; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
