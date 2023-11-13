#include "shell.h"
/**
 * _strncat - Concatenates two strings, copying up to n bytes from source.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
char *dest_end = dest + stringlen(dest);
while (*src != '\0' && n > 0)
{
*dest_end++ = *src++;
n--;
}
*dest_end = '\0';
return (dest);
}
