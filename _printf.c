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

	for (y = 0; format[y] != '\0'; y++)
	{
		buffer = 0;
		va_start(va_printf, format);
		if ((format[y] == '%') && ((y + 1) < leng))
			{
				y++;
				if (aval(format[y]))
				{
					buffer += get_operator(format[y])(va_printf);
				}
				else if (format[y] == '\0')
				{
					return (0);
				}
					// si no, putchar (char)
			}// si nada de nada, putchar y incrementar buff
	}
	va_end(va_printf);
	return (buffer); // (write(1, buffer, 1024);
}
/**
 *aval - see if given char matches with operators
 *@c: Char to compare with operator
 *Return: proper operator
 */
int aval(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i');
}
