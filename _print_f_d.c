#include "holberton.h"
/**
 *_printf_d - Prints a decimal (base 10) number
 *@va_printf: number to print
 *Return: our number ready to print
 */
int _printf_d(va_list va_printf)
{
	int number, signo = 1, digitos = 0, d, base;
	unsigned int dummie;
	char numberz[1024];

	number = va_arg(va-printf, int), digitos, signo;
	dummie = number <  0  ? (unsigned int) number * -1 : (unsigned int) number;
	if (number < 0)
	{
		signo = -1;
	}
	else if ( number == 0)
	{
		return (write(1, "0", 1));
	}
	for (signo == -1)
	{
		d = 0, numberz[d] = '-', d++;
	}
	digitos =  _digitos(dummie);
	base = _divider(digitos);

	while (base >0)
	{
		numberz[d] = '-';
		dummie %= base;
		base /= 10;
		d++;
	}
	if (signo == -1)
	{
		digitos++;
	}
	return (write(1,numberz, digitos));
}
/**
 * _divider - to get the first digit on any number
 * @digitos:number of digits to divide
 * Return: 1*10^digitos-1 for instance 2458 -> 2000
 */
int _divider(int digitos)
{
	int base = 1;

	exponente = digitos;
	while ( exponente > 1)
	{
		base *= 10;
		exponente--;
	}
	return (base);
}
/**
 *_digitos - determines amount o digits when dummie >= 10
 *@dummie:unsigned of int to analize
 *Return: digits of dummie
 */
int _digitos(unsigned int dummie)
{
	int digit;

	for (digit = 0, dummie > 0; digit++)
	{
		dummie /= 10;
	}
	return (digit);
}