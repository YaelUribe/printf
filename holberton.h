#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
struct operator 
{
	char tipo;
	int (*fn)(va_list);
}oper;
int _printf(const char *format, ...);
typedef struct operator oper;
int _strlen(char *s);
char _printf_s(va_list va_printf);
char _printf_c(va_list va_printf);
int _printf_d(va_list va_printf);
int (*get_operator(const char c))(va_list va_printf);
int aval(char c);
char _write(f);
#endif /* HOLBERTON_H */