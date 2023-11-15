#include "shell.h"
/**
 * _stringcmp - unction that compares two strings
 * @st0: first function
 * @st1: second function
 * Return: val
 */
int _stringcmp(char *st0, char *st1)
{
	int comp = 0;

	while (*st0 == *st1 && *st0 != '\0')
	{
		st0++;
		st1++;
	}
	if (st0 != st1)
		comp = *st0 - *st1;

	return (comp);
}
