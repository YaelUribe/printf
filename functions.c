#include "holberton.h"
/**
 * _printf_s - function to print a string of char
 *@va_printf: variadic string to analize
 *Return: All chars of our string
 **/
int _printf_s(va_list va_printf)
{
	int lstr = 0;
	char *strp;
	int t = 0;

	strp = va_arg(va_printf, char*);
	if (strp == NULL)
	{/* if our pointer is empty, return null*/
		return (write(1, "NULL", 4));
	}
	else
	{		/*here get length of string*/
		while (strp[t] != '\0')
		{
			lstr++;/*lstr augments, so it's our "buffer"*/
			t++;
		}
		return (write(1, strp, lstr));
	}

}
/**
 *_printf_c -function to print char
 *@va_printf: variadic list to check
 *Return: char(s) to print.
 */
int _printf_c(va_list va_printf)
{
	char c;

	c = (char) va_arg(va_printf, int);/*cast to change int for char*/
	return (write(1, &c, sizeof(char)));
}