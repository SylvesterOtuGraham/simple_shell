#include "shell.h"
/**
 * _strncmp - compares n bytes in str1 and str2
 * @str1: first string to be compared
 * @str2: second string to be compared
 * @a: number of bytes to be checked
 * Return: > 0 if str2 is less than str1, < 0 if str1 < str2,
 * 0 is str2 is equal to str2
 */

int _strncmp(char *str1, char *str2, int a)
{
	if (!a)
		return (0);
	if (*str1 == *str2)
		return (*str1 ? _strncmp(str1 + 1, str2 + 1, a - 1) : 0);
	if (*str1)
		return (1);
	if (*str2)
		return (-1);
	return (*str1 - *str2);
}
