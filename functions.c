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
char _printf_s(char *s)
{
	int lstr = 0;

	while (s[lstr] != '\0')
	{
		lstr++;
	}
	return (lstr);
}
/**
 *_printf_c -function to print char
 *@s: pointer to check
 *Return: char(s) to print.
 */
char _printf_c(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	return  (c);
}

/**
 *_printf_d - Prints a decimal (base 10) number
 *@a: number to print
 *Return: our number ready to print
 */
int _printf_d(int a)
{
	int number = a;
	int dummie = number;
	int cadena[25];
	int e = 0;

	if (number < 0)
	{
		number = -number;
	}
	while (number != 0)
	{
		cadena[e++] = (number % 10);
		number /= 10;
	}
	if (dummie < 0)
	{
		cadena[e++] = '-';
		e--;
	}
	while (e >= 0)
	{
		if (cadena[e] != '-')
		return (cadena[e--] + '0');
		else
		return (cadena[e--]);
	}

}
