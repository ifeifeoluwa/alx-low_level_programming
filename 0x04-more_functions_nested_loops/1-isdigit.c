#include "main.h"

/**
 * _isdigit - checks for digits 0 - 9
 * @c: parameter
 * Return: 0 if successful
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
