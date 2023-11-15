#include "shell.h"
/**
 * runcommand - a function that run command
 * @rgv: rgv argument
 * @argv: arv argument
 * @envp: envp argument
 */
void runcommand(char **rgv, char **argv, char **envp)
{
	pid_t mchild;
	int status;
	/*denum *c = malloc(sizeof(struct denum));*/

	mchild = fork();

	if (mchild == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}
	if (mchild == 0)
	{

		if (execve(rgv[0], rgv, envp) == (-1))
		{
			write(STDOUT_FILENO, argv[0], _stringlen(argv[0]));
			write(STDOUT_FILENO, ": No such file or directory",
			_stringlen(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
			/*geterror(c -> cnt, argv, cmad);*/
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
	}
}
