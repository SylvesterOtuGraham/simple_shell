#include "shell.h"

/**
 * _stringconcat - Appends the src string to the dest string
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the concatenated string
 */
char *_stringconcat(char *dest, const char *src)
{
    int dest_len = 0;
    int src_len = 0;

    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    while (src[src_len] != '\0')
    {
        dest[dest_len + src_len] = src[src_len];
        src_len++;
    }

    dest[dest_len + src_len] = '\0';

    return dest;
}

