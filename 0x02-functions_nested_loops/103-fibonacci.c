#include <stdio.h>

/**
 * main - prints sum of fibonacci
 * Return: Always 0
 */

int main(void)
{
	int a, b = 1, c = 2, d, e = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			e = e + b;
		}
		d = b + c;
		b = c;
		c = d;
	}
	printf("%lu\n", e);
	return (0);
}
