#include "main.h"

/**
 * _isalpha - returns 1 if it's an alphabet
 * @alph: value to be compared with
 * Return: 1 if successful
 */

int _isalpha(int alph)
{
	if (alph >= 65 && alph <= 122)
		return (1);
	else
		return (0);
}
