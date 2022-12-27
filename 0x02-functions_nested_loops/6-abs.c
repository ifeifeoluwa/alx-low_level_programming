#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute valie of an integer
 *
 * @n: the viven number
 *
 * Return: returns value to function
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}
