#include "main.h"

/**
 * _islower - checke for lowercase
 * @c: value to be compared with
 * Return: 0 if successful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
