#include "main.h"

/**
 * find_prime - recursion loop
 * @n: number
 * @i: number to iterate
 * Return: return 1 or 0
 */

int find_prime(int n, int i)
{
	if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);

	if (n % i != 0)
		return (find_prime(n, i + 1));

	return (0);
}

/**
 * is_prime_number - check if number is a p4ime number
 * @num: number
 * Return: returns 1 or 0
 */

int is_prime_number(int num)
{
	int i = 2;

	if (num < 2)
		return (0);

	if (num == 2)
		return (1);

	return (find_prime(num, i));
}
