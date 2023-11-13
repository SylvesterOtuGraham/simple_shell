#include "shell.h"
/**
 * spacetrim - remove leading spaces from a string
 * @cmd: the input string
 * Return: modified string
 */
char *spacetrim(char *cmd)
{
char *copycmd;
char *trimmedCmd;
if (cmd == NULL || *cmd == '\0')
{
return (cmd); /* Handle null or empty string */
}
/* Find the first non-space character */
while (*cmd != '\0' && *cmd == ' ')
{
cmd++;
}
/* Shift the remaining characters to the beginning of the string */
copycmd = cmd;
trimmedCmd = cmd;
while (*cmd != '\0')
{
if (*cmd != ' ')
{
*trimmedCmd = *cmd;
trimmedCmd++;
}
cmd++;
}
*trimmedCmd = '\0'; /* Null-terminate the trimmed string */

return (copycmd); /* Return a pointer to the modified original string */
}
