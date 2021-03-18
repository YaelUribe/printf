#include "holberton.h"
/**
*_printf - printf-like function
*@format: format to print from variadic functions
*Return: buffer if succes, if error
*/
int _printf(const char *format, ...)
{
	va_list va_printf;
	int buffer,	y = 0;
	char aux = '%';

	if (format == NULL)
		return (-1);
	buffer = 0;
	va_start(va_printf, format);
	while (format[y] != '\0')
	{
		if (format[y] == '%')
		{
			if (aval(format[y + 1]))
			{
				y++;
				if (format[y] == '%')
				{
					write(1, &aux, 1);
					buffer++;
				}
				else
					buffer += get_operator(format[y])(va_printf);
			}
			else if (format[y + 1] == '\0')
				return (-1);
			else if (format[y + 1] != '\0')
				buffer += _write(format[y]);
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
	return (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == '%');
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
