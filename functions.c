#include "holberton.h"
/**
 * _strlen - Length of a string
 * @s: pointer to our string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int g;

	for (g = 0; s[g] != '\0'; g++)
	{
		return (g);
	}
}
/**
 * _printf_s - function to print a string of char
 *@s:string to analize
 *Return: All chars of our string
 **/
char _printf_s(va_list va_printf)
{
	int lstr = 0;
	char *strp;
	int t = 0;

	strp = va_arg(va_printf, char*);
	if(strp == NULL)
	{/* if our pointer is empty, return null*/
		return(write(1, "NULL", 4));
	}
	else
	{		/*here get length of string*/
		while(strp[t] != '\0')
		{
			lstr++;/*lstr augments, so it's our "buffer"*/
			t++;
		}
		return(write(1, strp, lstr));
	}

}
/**
 *_printf_c -function to print char
 *@s: pointer to check
 *Return: char(s) to print.
 */
char _printf_c(va_list va_printf)
{
	 char c;

	 c = (char) va_arg(va_printf, int);/*cast to change int for char*/

	 return (write(1, &c, sizeof(char))); //un puntero? o una direccion? o qué?
}