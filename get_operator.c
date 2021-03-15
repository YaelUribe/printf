#include "holberton.h"
/**
 *get_operator - determines the function to print some data.
 *@c: char to identify format for printing
 *Return: function pointer defined by 'c'
 */
int (*get_operator(const char c))(va_list va_printf)
{
	oper red[] = {
		{"c", _printf_c},
		{"s", _printf_s},
		{"d", _printf_d},
		{"i", _printf_i}
		{NULL, NULL},
	};
	int a = 0;

	for (a = 0; a < 5; a++)
	{
		if(c == red[a].tipo)
		{
			return (red[a].fn);
		}
	}
	/*if doesn't find proper function*/
	return (0);
}