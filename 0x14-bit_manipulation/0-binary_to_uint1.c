#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @bn: binary number
 * Return: the unsigned int or 0 when the conversion fails
 */

unsigned int binary_to_uint(const char *bn)
{
	unsigned int uint, pl;
	int n;

	if (!bn)
		return (0);

	for (n = 0; bn[n]; n++)
	n--;

	for (pl = 1, uint = 0; n >= 0; n--)
	{
		if (bn[n] == '0')
		{
			pl *= 2;
			continue;
		}
		else if (bn[n] == '1')
		{
			uint += pl; 
			pl *= 2; 
			continue;
		}
		return (0);
	}
	return (uint);
}
