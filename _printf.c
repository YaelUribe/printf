#include "holberton.h"
/**
*
*
*/
int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return (0); //-1 ?? lo que sea
	}
	va_list va_printf;

	int number;
	int buffer;
	int leng = _strlen(format);
	int y;

	for (y = 0; format[y] != '\0', y++)
	{
		buffer = 0;
		va_start(va_printf, format);
		if ((format[y] == '%') && ((y + 1) < leng))
			{
				y++;
				if (aval(format[y]))
				{
					buffer += get_operator(format[i])(va_printf);
				}// si no, putchar (char)
			}// si nada de nada, putchar y incrementar buff
	}
}
int aval(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i');
}
