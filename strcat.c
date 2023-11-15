#include "shell.h"
/**
 * _strconcat - This function appends the src string to the dest string
 * @char_ptr1: string agument
 * @char_ptr2: string argument
 * Return: String
 */
char *_strconcat(char *char_ptr1, const char *char_ptr2)
{
int len1 = 0, len2 = 0, j;

while (char_ptr1[len1] != '\0')
{
len1++;
}
while (char_ptr2[len2] != '\0')
{
len2++;
}
for (j = 0; j < len2; j++)
{
char_ptr1[len1 + j] = char_ptr2[j];
}
char_ptr1[len1 + len2] = '\0';
return (char_ptr1);
}
