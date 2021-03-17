#include "holberton.h"
/**
*_printf - printf-like function
*@format: format to print from variadic functions
*Return: buffer if succes, if error
*/
int _printf(const char *format, ...)
{
	va_list va_printf;
	int buffer;
	int y = 0;

	if (format == NULL)
	{
		return (-1);
	}
	buffer = 0;
	while (format[y] != '\0')
	{
		va_start(va_printf, format);
		if (format[y] == '%')
		{
			y++;
			if (aval(format[y]))
			{
				buffer += get_operator(format[y])(va_printf);
			}
			else if (format[y] == '\0')
			{
				return (-1);
			}
			else if (format[y] != '\0')
			{
				buffer += _write(format[y]);
			}
			else if (format[y] == '%')
			{
				_write('%');
			}
			y++;
		}
		else
		{
		buffer += _write(format[y]);
		y++;
		}
	}
	va_end(va_printf);

	return (buffer);
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
/**
 *_write - works like a putchar, but writing to stdout
 *@f: char given
 *Return: -1 if error, char if success
 */
int _write(char f)
{
	return (write(1, &f, 1));
}