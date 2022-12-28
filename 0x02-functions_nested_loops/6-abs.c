#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the viven number
 *
 * Return: returns value to function
 */

int _abs(int n)
{
	if (n > 0)
		n = n;
	else
		n *= -1;
	return (n);
}
