#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer dereference for changing the value of the variable a
 * @b: pointer deference for changing the value of the variable b
 * int c: assigns the address of the variable a to c
 * Return: Always 0 success
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
