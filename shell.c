#include "shell.h"
#include <stdbool.h>
/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *@envp: environment variables
 *Return: 0
 */
int main(int argc, char **argv, char **envp)
{
if (argc == 1 && isatty(STDIN_FILENO))
{
_prompter(argv, envp, true);
}
else
{
_prompter(argv, envp, false);
}
return (0);
}
