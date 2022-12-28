#include "main.h"

/**
 * times_table - p4ints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			c = a * b;
		_putchar(c);
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}
