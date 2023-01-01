#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		j++;
	}
}
