#include "main.h"

/**
 * calc_sqrt - finds square root of 2 numbers
 * @m: number
 * @n: squre root of m
 * Return: square root of given number
 */

int calc_sqrt(int m, int n)
{
	if ((n * n) > m)
		return (-1);
	else if ((n * n) == m)
		return (n);
	else
		return (calc_sqrt(m, (n + 1)));
	return (1);
}


/**
 * _sqrt_recursion - r3turns tge natural square root of a given number
 * @n: given number
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (calc_sqrt(n, 1));
}
