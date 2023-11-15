#include "shell.h"
/**
 * _stringcopy - copy a string
 * @char_ptr1: dest string arg
 * @char_ptr2: source arg
 * Return: string value
 */
char *_stringcopy(char *char_ptr1, char *char_ptr2)
{
	int a, leng = 0;

	while (char_ptr2[leng] != '\0')
	{
		leng++;
	}
	for (a = 0; a < leng; a++)
	{
		char_ptr1[a] = char_ptr2[a];
	}
	char_ptr1[a] = '\0';
	return (char_ptr1);
}
