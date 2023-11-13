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
while (n > 0 && *str1 && *str2 && (*str1 == *str2))
{
str1++;
str2++;
n--;
}

if (n == 0 || (*str1 == '\0' && *str2 == '\0'))
return (0);
else if (*str1 > *str2)
return (1);
else
return (-1);
}
