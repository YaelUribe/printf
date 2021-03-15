#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _strlen(va_list va_printf);
char _printf_s(va_list va_printf);
char _printf_c(va_list va_printf);
int _printf_d(int a);
int (*get_operator(const char c))(va_list va_printf);
#endif /* HOLBERTON_H */