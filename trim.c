#include "shell.h"
/**
 * spacetrim - remove space
 * @cmad: comand
 * Return: cmmand
 */
char *spacetrim(char *cmad)
{
	char *cpcmd;
	int a = 0, leng;

	while (cmad[a] == ' ')
		a++;
	leng = _stringlen(cmad) - a + 1;
	cpcmd = malloc(leng + 1);
	if (!cpcmd)
	{
		perror("Allocation Failed\n");
		return (NULL);
	}
	_strncopy(cpcmd, cmad + a, leng);
	cpcmd[leng] = '\0';
	_stringcopy(cmad, cpcmd);
	free(cpcmd);
	return (cmad);
}
