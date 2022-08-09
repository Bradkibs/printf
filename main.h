#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int _putchar(char c);
int val_check(const char *format, va_list ap);
void num_to_str(int64_t num, int base, char *buffer);
void u_num_to_str(uint64_t num, int base, char *buffer);

#endif
