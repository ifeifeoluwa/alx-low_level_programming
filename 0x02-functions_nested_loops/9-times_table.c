#include "main.h"

/**
 * times_table - p4ints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
		_putchar(c);
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}
