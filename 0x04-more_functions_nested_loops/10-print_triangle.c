#include "main.h"

/**
 * print_triangle - prints triangle on the screen
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, n;

	n = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
