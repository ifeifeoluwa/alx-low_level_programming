#include "main.h"

/**
 * reverse_array - this function reverses an array
 * @a: pointer to array
 * @n: number of elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int t, c = 0;

	n = n - 1;

	while (c <= n)
	{
		t = a[c];
		a[c++] = a[n];
		a[n--] = t;
	}
}
