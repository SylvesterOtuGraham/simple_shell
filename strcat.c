#include "shell.h"
/**
 * _stringconcat - This function appends the src string to the dest string
 * @char_ptr1: string agument
 * @char_ptr2: string argument
 * Return: String
 */
char *_stringconcat(char *char_ptr1, char *char_ptr2)
{
	int leng = 0, lend1 = 0, a;

	while (char_ptr2[leng] != '\0')
	{
		leng++;
	}
	while (char_ptr1[lend1] != '\0')
	{
		lend1++;
	}
	for (a = 0; a < leng; a++)
	{
		char_ptr1[lend1 + a] = char_ptr2[a];
	}
	char_ptr1[lend1 + leng] = '\0';
	return (char_ptr1);
}
