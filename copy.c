#include "shell.h"

/**
 * _stringcopy - copy a string
 * @char_ptr1: destination string argument
 * @char_ptr2: source argument
 * Return: pointer to the destination string
 */
char *_stringcopy(char *char_ptr1, char *char_ptr2)
{
	int a;

	for (a = 0; char_ptr2[a] != '\0'; a++)
	{
		char_ptr1[a] = char_ptr2[a];
	}
	char_ptr1[a] = '\0';

	return (char_ptr1);
}

