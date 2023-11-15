#include "shell.h"
/**
 * _strncat - Concantenates two strings where n number
 *            of bytes are copied from source.
 * @char_ptr1: Pointer to destination string.
 * @char_ptr2: Pointer to source string.
 * @a: a bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *char_ptr1, const char *char_ptr2, size_t a)
{
	size_t dest_len = _stringlen(char_ptr1);
	size_t i;

	for (i = 0; i < a && char_ptr2[i] != '\0'; i++)
		char_ptr1[dest_len + i] = char_ptr2[i];
	char_ptr1[dest_len + i] = '\0';

	return (char_ptr1);
}
