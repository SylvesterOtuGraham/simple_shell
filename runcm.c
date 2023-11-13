#include "shell.h"
/**
 * runcommand - Run a command in a child process and wait for it to complete.
 * @rgv: Argument vector for the command.
 * @argv: Program name (for error reporting).
 * @envp: Environment variables.
 */
void runcommand(char **rgv, char **argv, char **envp)
{
pid_t child_pid;
int status;
child_pid = fork();
if (child_pid == -1)
{
perror("Fork Error");
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
if (execve(rgv[0], rgv, envp) == -1)
{
write(STDOUT_FILENO, argv[0], stringlen(argv[0]));
write(STDOUT_FILENO, ": No such file or directory",
stringlen(": No such file or directory"));
write(STDOUT_FILENO, "\n", 1);
exit(EXIT_FAILURE);
}
}
else
{
waitpid(child_pid, &status, 0);
}
}

