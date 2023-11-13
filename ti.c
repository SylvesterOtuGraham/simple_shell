#include "shell.h"
/**
 * _stringcmp - function that compares two strings
 * @st0: first string
 * @st1: second string
 * Return: Integer less than, equal to, or greater than zero
 * if st0 is found, respectively, to be less than, to match,
 * or be greater than st1.
 */
int _stringcmp(char *st0, char *st1)
{
while (*st0 == *st1 && *st0 != '\0')
{
st0++;
st1++;
}
return (*st0 - *st1);
}
