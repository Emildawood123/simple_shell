#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
int str_length(char *text);
int str_compare(char *str1, char *str2);
char *_str_dup(char *str);
char *_str_copy(char *str1, char *str2);
char *_str_concat(char *str1, char *str2);
char *_get_env(char *name);
void env_command(void);
extern char **environ;
int _atoi(char *str);
char *print_num(int n);
void non_inter(char **argv);
void inter(char **argv);
#endif
