#include "main.h"
/**
 * _isupper - checks uppercas3
 * @c: parameter
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
