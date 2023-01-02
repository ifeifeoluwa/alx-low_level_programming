#include "main.h"

/**
 * _strcmp - this function compares two strings
 * @s1: first string
 * @s2: second string
 * Return: value less than 0 if s1 is less than s2
 * value greater than 0, if s1 is greater than s2
 * 0 if s1 equals to s2
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0, cv;

	while (s1[c] == s2[c] && s1[c] != '\0')
		c++;
	cv = s1[c] - s2[c];
	return (cv);
}
