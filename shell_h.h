#ifndef _SHELL_H_H_
#define _SHELL_H_H_

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void prompt_user(void);
void prnt(const char *string);
void read_order(char *order, size_t size);
void exec_order(const char *order);

#endif
