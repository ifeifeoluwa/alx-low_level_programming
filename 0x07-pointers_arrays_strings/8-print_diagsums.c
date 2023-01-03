#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int rc, i;

	for (rc = 0; rc < size; rc++)
	{
		i = (rc * size) + rc;
		sum1 += a[i];
	}
	for (rc = 1; rc <= size; rc++)
	{
		i = (rc * size) - rc;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
