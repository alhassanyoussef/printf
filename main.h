#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _print_int_no_flags(int n);
int _print_char(char c);
int _print_percent();

#endif /* MAIN_H */
