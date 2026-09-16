#ifndef MY_MASTERMIND_H
#define MY_MASTERMIND_H

#include <unistd.h>
#include <stdio.h>

int get_input(char *buffer);
int is_valid(char *input);
int compare(char *secret, char *input);
void generate_secret(char *secret);

#endif