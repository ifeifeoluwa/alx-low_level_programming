#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string and prints it on the screen
 * @s: pointer variable
 */

void rev_string(char *s)
{
	int i, sz, hf = 0;
	char ft, lt;

	while (s[i] != '\0')
	{
		i++;
	}
	sz = i - 1;
	hf = sz / 2;
	while (hf >= 0)
	{
		ft = s[sz - hf];
		lt = s[hf];
		s[hf] = ft;
		s[sz - hf] = lt;
		hf--;
	}
}
