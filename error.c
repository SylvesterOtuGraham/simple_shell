#include "shell.h"
/**
 * intlen - a func that ... later
 * @n: a parameter
 * Return: the lenth.
 */
int intlen(int n)
{
unsigned int number = (n < 0) ? -n : n;
int leng = 1;

while (number > 9)
{
leng++;
number /= 10;
}
return ((n < 0) ? leng + 1 : leng);
}
/**
 * _itoa - a func that .. later
 * @num: a passing param.
 * Return: buff if not NULL.
 */
char *_itoa(int num)
{
int isNegative = (num < 0) ? 1 : 0;
int length = intlen(num);
char *buff = (char *)malloc(length + isNegative + 1);
if (!buff)
{
return (NULL);
}
if (isNegative)
{
buff[0] = '-';
num *= -1;
}
{
int i;
for (i = length + isNegative - 1; i >= isNegative; i--)
{
buff[i] = '0' + (num % 10);
num /= 10;
}
}
buff[length + isNegative] = '\0';
return (buff);
}
/**
 *error_handler -  Handles errors in the program.
 *and a string representing the current command.
 *@n: Pointer to a 'denum' structure.
 *@argv: Array of strings representing command-line arguments.
 *@cmad: A string representing the current command.
 *@return void
 */

void error_handler(denum *n, char **argv, char *cmad)
{
char *cnt_str = _itoa(n->cnt);
int length = stringlen(argv[0]) + stringlen(cmad) + stringlen(cnt_str) + 17;
char *errmsg = malloc(length);
if (!errmsg)
{
return;
}
snprintf(errmsg, length, "%s:%d:%s:%s:Nrrr", argv[0], n->cnt, cmad, cnt_str);
write(STDOUT_FILENO, errmsg, length - 1); /*Exclude the null terminator*/
free(errmsg);
}


