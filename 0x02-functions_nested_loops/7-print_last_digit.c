#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 *
 * @n: the given number
 *
 * Return: returns the last digit
 */

int print_last_digit(int n)
{

	if (n >= 0 && n <= 9)
		n = n;
	else
		n = n % 10;
	if (n < 0)
		n *= -1;
	return (n);
}
