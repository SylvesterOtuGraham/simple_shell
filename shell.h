#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>

#define MAX_C 10

/**
 * struct denum - structure that contains vars
 * @cnt: lines cnt
 */
typedef struct denum
{
	int cnt;
} denum;

/*Function Prototypes*/
char *_getenv(char *name);
void _prompter(char **argv, char **envp, bool flag);
void error_handler(denum *n, char **argv, char *cmad);
void exit_handler(char *cmad);
char *get_path(char *cmad);
char **tokenize_env(char *path);
void runcommand(char **rgv, char **argv, char **envp);
char *_strconcat(char *char_ptr1, char *char_ptr2);
int _stringcmp(char *st0, char *st1);
int _strncmp(char *str1, char *str2, int a);
char *_strncpy(char *dest, const char *src, int n);
char *path_handler(char **rgv, char *cmad);
char *spacetrim(char *cmad);
int stringlen(char *s);

/*External Variables*/
extern char **environ;

#endif

