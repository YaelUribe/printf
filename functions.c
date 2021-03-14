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
char _printf_s(char *s);
{
	char lstr = 0;

	while (s[lstr] != '\0')
	{
		lstr++;
	}
	return (lstr);
}
