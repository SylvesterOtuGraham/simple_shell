#include "shell.h"
/**
 * _strncopy - copy n char
 * @char_ptr1: string argument
 * @char_ptr2: string argument for char_ptr2
 * @n: integer argument
 * Return: char_ptr1
 */
char *_strncopy(char *char_ptr1, const char *char_ptr2, int n)
{
	int i;

	for (i = 0; i < n && char_ptr2[i] != '\0'; i++)
	{
		char_ptr1[i] = char_ptr2[i];
	}
	for (; i < n; i++)
	{
		char_ptr1[i] = '\0';
	}
	return (char_ptr1);
}
