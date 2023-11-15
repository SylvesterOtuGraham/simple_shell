#include "shell.h"
/**
 * _stringlen - length of a string
 * @s: string
 * Return: length
 */
int _stringlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
