#include <stdio.h>

/**
 * main - prints all possible combinations of two digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c = 0;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a != b && b > a)
			{
				c++;
				putchar(a);
				putchar(b);
				if (c != 45)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
