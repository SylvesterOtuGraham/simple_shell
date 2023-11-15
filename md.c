#include "shell.h"
/**
 * sig_handler - handler cntrl c
 * @numd: num argument
 */
void sig_handler(int numd)
{
	(void)numd;
	write(STDOUT_FILENO, "\n$ ", _stringlen("\n$ "));
}
/**
 * _prompter - a shell using c
 * @argv: argument by user
 * @envp: envirement variable argument
 * @flag: flag argument for mode
 */
void _prompter(char **argv, char **envp, bool flag)
{
	size_t a = 0;
	ssize_t num_d = 0;
	char *cmad = NULL, *rgv[MAX_C];
	int x/*, stat,path*/;

	while (1)
	{
		if (flag && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _stringlen("$ "));
		signal(SIGINT, sig_handler);
		num_d = getline(&cmad, &a, stdin);
		if (num_d == -1) /*handles the end file case*/
		{
			free(cmad);
			exit(EXIT_SUCCESS);
		}
		if (cmad[num_d - 1] == '\n')
			cmad[num_d - 1] = '\0';
		cmad = spacetrim(cmad);
		if (_stringlen(cmad) == 0)
			continue;
		x = 0;
		rgv[x] = strtok(cmad, " \n");
		exit_handler(cmad);
		path_handler(rgv, cmad);
		while (rgv[x])
		{
			x++;
			rgv[x] = strtok(NULL, " \n");
		}
		runcommand(rgv, argv, envp); /* envir */
	}
	free(cmad);
}
