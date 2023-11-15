#include "shell.h"

/**
 * _strncmp - compares n bytes in str1 and str2
 * @str1: first string to be compared
 * @str2: second string to be compared
 * @n: number of bytes to be checked
 * Return: > 0 if str2 is less than str1, < 0 if str1 < str2,
 * 0 is str1 is equal to str2
 */
int _strncmp(char *str1, char *str2, int n)
{
if (*str1 == *str2 && *str1 != '\0' && n > 0)
{
return (_strncmp(str1 + 1, str2 + 1, n - 1));
}
else if (*str1 == '\0' && *str2 == '\0')
{
return (0);
}
else if (*str1 == '\0')
{
return (-1);
}
else if (*str2 == '\0')
{
return (1);
}
else
{
return (*str1 - *str2);
}
}
