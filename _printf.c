#include "holberton.h"
/**
*
*
*/
int _printf(const char *format, ...);
if (format == NULL) 
{ 
    return 0;
}
va_list va_printf;
va_start (va_printf, format);

int number = 0; // revisar //
int green = 0;
int leng = _strlen(format);
int y = 0;


       if ((format[y] == '%') && ((y + 1) <leng))



