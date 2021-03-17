#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *structure that determines identifier
 *@tipo: char representing data type to print
 *@fn: pointer to function to print data
 */
struct operator
{
	char tipo;
	int (*fn)(va_list);
};
int _printf(const char *format, ...);
typedef struct operator oper;
int _printf_s(va_list va_printf); /*print string*/
int _printf_c(va_list va_printf); /*print char*/
int _printf_d(va_list va_printf); /*print digits, integers*/
int (*get_operator(const char c))(va_list va_printf);  /*determines operator to use*/
int aval(char c);/*validates char with operator*/
int _write(char f); /* putchar-like function*/
int _divider(int digitos);
int _digitos(unsigned int dummie);
#endif /* HOLBERTON_H */