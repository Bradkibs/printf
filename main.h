#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int _putchar(char c);
int val_check(const char *format, va_list ap);

#endif
