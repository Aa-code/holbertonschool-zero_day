#ifndef _shell_
#define _shell_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

void freeArray(char **cmd);
void SHELLexit(char *buffer);
char *exists(char *s1, char **s2);
char *_strncon(char *s1, char *s2);
int PATHcheck(char *usrinput, char **strings);
char **PATHfind(char **env);
int main(int argc, char *argv[], char *envp[]);
char **vect(char *str, ssize_t n, char *delim);
char *_strcat(char *dest, char *src, int num);
unsigned int _strlen(char *S);
int  _strcmp(char *s1, char *s2);
char *_strcopy(char *dest, char *src);
char **PATHtokenize(char **search_path, char *path, int size);
int PATHexecute(char *command, char *inputs);
char *_strncpy(char *dest, char *src, int n);
#endif /* _shell */
