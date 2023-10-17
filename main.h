#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#define PF_SIZE 4
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
struct printfunc{
char *data_type;
int (*print_function)(void *);
};
int _printf(const char *format, ...);
int _strlen(char *ch);
int _putchar(char c);
int print_char(void *c);
int print_string(void *s);
int print_decimal(void *d);
int print_int(void *i);
extern struct printfunc pf[];
#endif
