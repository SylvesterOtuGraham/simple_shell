#include "shell.h"
/**
 * exit_handler - function that terminate the prog when
 * user types "exit".
 * @cmad: the string to be read.
 * Return: nothing.
 *
 */
void exit_handler(char *cmad)
{
	if (_stringcmp("exit", cmad) == 0)
	{
		free(cmad);
		exit(EXIT_SUCCESS);
	}
}

