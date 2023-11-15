#include "shell.h"
/**
 * sig_handler - handler cntrl c
 * @nu: nu argument
 */
void sig_handler(int nu)
{
(void)nu;
write(STDOUT_FILENO, "\n$ ", stringlen("\n$ "));
}
/**
 * _prompter - a shell using c
 * numd: num argument
 * @argv: argument by user
 * @envp: envirement variable argument
 * @flag: flag argument for mode
 */
void _prompter(char **argv, char **envp, bool flag)
{
size_t a = 0;
ssize_t numd = 0;
char *cmd = NULL, *rgv[MAX_C];
int x/*, stat,path*/;

while (1)
{
if (flag && isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", stringlen("$ "));

signal(SIGINT, sig_handler);

numd = getline(&cmd, &a, stdin);
if (numd == -1)
{
free(cmd);
exit(EXIT_SUCCESS);
}

if (cmd[numd - 1] == '\n')
cmd[numd - 1] = '\0';

cmd = spacetrim(cmd);
if (stringlen(cmd) == 0)
continue;

x = 0;
rgv[x] = strtok(cmd, " \n");
exit_handler(cmd);
path_handler(rgv, cmd);
while (rgv[x])
{
x++;
rgv[x] = strtok(NULL, " \n");
}
runcommand(rgv, argv, envp); /* envir */
}
free(cmd);
}

