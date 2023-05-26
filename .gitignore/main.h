#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main();
void main_function();
void _prints(char* message);
void displayPrompt();
char* readCommand();
void executeCommand();
int isExitCommand(char* command);
size_t _strcspn(const char *s, const char *reject);
int _strcmp(const char *s1, const char *s2);

#endif
