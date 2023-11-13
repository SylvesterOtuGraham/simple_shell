#include "shell.h"

/**
 * _strconcat - Concatenates the src string to the dest string
 * @char_ptr1: Destination string
 * @char_ptr2: Source string
 * Return: Pointer to the destination string
 */
char *_strconcat(char *char_ptr1, char *char_ptr2)
{
strcpy(char_ptr1 + strlen(char_ptr1), char_ptr2);
return (char_ptr1);
}

