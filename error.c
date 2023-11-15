#include "shell.h"
/**
 * intlen - a func that ... later
 * @n: a parameter
 * Return: the lenth.
 */
int intlen(int n)
{
	unsigned int num;
	int leng = 1;

	if (n < 0)
	{
		leng++;
		num = n * -1;
	}
	else
	{
		num = n;
	}
	while (num > 9)
	{
		leng++;
		num = num / 10;
	}

	return (leng);
}
/**
 * _itoa - a func that .. later
 * @num: a passing param.
 * Return: buff if not NULL.
 */
char *_itoa(int num)
{
	char *buff;
	size_t  n;
	int leng = intlen(num);

	buff = malloc(leng + 1);
	if (!buff)
	{
		return (NULL);
	}
	buff[leng] = '\0';
	if (num < 0)
	{
		n = num * -1;
		*buff = '-';
	}
	else
		n = num;
	leng--;

	do {
		*(buff + leng) = (n % 10) + '0';
		n /= 10;
		leng--;
	} while (n > 0);
		return (buff);
}
/**
 * error - a function that run command
 * @n: argument
 * @argv: arv argument
 * @cmd: the command.
 * Return: void.
 */
void error_handler(denum *n, char **argv, char *cmd)
{
	int leng;
	char *errmsg, *cnt_str;

	cnt_str = _itoa(n->cnt);
	leng = stringlen(argv[0]) + stringlen(cmd) + stringlen(cnt_str) + 17;
	errmsg = malloc(leng);
	if (!errmsg)
	{
		return;
	}
	_stringcmp(errmsg, argv[0]);
	_strconcat(errmsg, ": ");
	_strconcat(errmsg, cnt_str);
	_strconcat(errmsg, ": ");
	_strconcat(errmsg, cmd);
	_strconcat(errmsg, ": not found\n");
	_strconcat(errmsg, "\0");
	write(STDOUT_FILENO, errmsg, leng);
	free(errmsg);
}
