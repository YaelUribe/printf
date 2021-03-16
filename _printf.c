#include "holberton.h"
/**
*_printf - printf-like function
*@format: format to print from variadic functions
*Return: buffer if succes, if error
*/
int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return (-1);
	}
	va_list va_printf;

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
					return (-1);
				}
				else if (format[y] == '%')
				{
					buffer += _write('%');
				}
				else if(format[y] != '\0')
				{
					buffer += _write(format[y]);
				}
			}
			buffer += _write(format[y])
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
/**
 *_write - works like a putchar, but writing to stdout
 *@f: char given
 *Return: -1 if error, char if success
 */
char _write(f)
{
	return (write(1, &f, 1));
}