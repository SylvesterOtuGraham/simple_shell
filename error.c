#include "shell.h"
/**
 * intleng - a func that ... later
 * @a: a parameter
 * Return: the lenth.
 */
int intleng(int a)
{
	unsigned int numd;
	int leng = 1;

	if (a < 0)
	{
		leng++;
		numd = a * -1;
	}
	else
	{
		numd = a;
	}
	while (numd > 9)
	{
		leng++;
		numd = numd / 10;
	}

	return (leng);
}
/**
 * _sis - a func that .. later
 * @numd: a passing param.
 * Return: buff if not NULL.
 */
char *_sis(int numd)
{
	char *buff;
	size_t  a;
	int leng = intleng(numd);

	buff = malloc(leng + 1);
	if (!buff)
	{
		return (NULL);
	}
	buff[leng] = '\0';
	if (numd < 0)
	{
		a = numd * -1;
		*buff = '-';
	}
	else
		a = numd;
	leng--;

	do {
		*(buff + leng) = (a % 10) + '0';
		a /= 10;
		leng--;
	} while (a > 0);
		return (buff);
}
/**
 * error_handler - a function that run command
 * @a: argument
 * @argv: argv argument
 * @cmad: the command.
 * Return: void.
 */
void error_handler(denum *a, char **argv, char *cmad)
{
	int leng;
	char *errmsg, *cnt_str;

	cnt_str = _sis(a->cnt);
	leng = _stringlen(argv[0]) + _stringlen(cmad) + _stringlen(cnt_str) + 17;
	errmsg = malloc(leng);
	if (!errmsg)
	{
		return;
	}
	_stringcopy(errmsg, argv[0]);
	_stringconcat(errmsg, ": ");
	_stringconcat(errmsg, cnt_str);
	_stringconcat(errmsg, ": ");
	_stringconcat(errmsg, cmad);
	_stringconcat(errmsg, ": not found\n");
	_stringconcat(errmsg, "\0");
	write(STDOUT_FILENO, errmsg, leng);
	free(errmsg);
}
