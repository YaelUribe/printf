/**
 *_printf_d - Prints a decimal (base 10) number
 *@a: number to print
 *Return: our number ready to print
 */
int _printf_d(va_list va_printf)
{
	int number = 0;
	int dummie = number;
	int cadena[1024];
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