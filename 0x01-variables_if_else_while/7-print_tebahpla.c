#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph_rev;

	for (alph_rev = 'z'; alph_rev >= 'a'; alph_rev--)
		putchar(alph_rev);
	putchar('\n');
	return (0);
}
