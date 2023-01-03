#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r <= 7; r++)
	{
		for (c = 0; c <= 7; c++)
			_putchar(a[r][c]);
		_putchar('\n');
	}
}
