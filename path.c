#include "shell.h"
/**
 * path_handler - handle the path function
 * @rgv: rgv argument
 * Return: command for exec
 * @cmad: command set by user
 */
char *path_handler(char **rgv, char *cmad)
{
/* Check if the command is not an absolute or relative path */
if (cmad[0] != '/' && cmad[0] != '.')
{
/* Allocate memory for the path ("/bin/" + command) */
size_t path_len = stringlen("/bin/") + stringlen(cmad) + 1;
char *path = malloc(path_len);
if (!path)
{
return (NULL); /* Return NULL if memory allocation fails */
}
/* Construct the path using snprintf */
snprintf(path, path_len, "/bin/%s", cmad);
/* Update rgv[0] */
rgv[0] = path;
return (path); /* Return the concatenated path */
}
return (cmad); /* Returns command if it's an absolute or relative path */
}

