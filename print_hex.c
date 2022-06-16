#include "main.h"

/**
 * print_hex - prints an unsigned int in hexidecimal form
 * @num: unsigned int to print
 * @c: flag to determine case of printing (0 = lower, 1 = upper)
 *
 * Return: number of digits printed
 */
char *print_hex(unsigned int num, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff, *ptr;
	int count;

	m = pow_num(16, 7); /* (16 ^ 7) */

	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = num / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (num / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar(diff + a[i]);
			count++;
		}
	}
	ptr = malloc(sizeof(char) * BUFFERSIZE);

	return (_strcpy(ptr, (char *)&count));
}

/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @ap: unsigned int to print
 *
 * Return: number of digits printed
 */
char *print_x(va_list ap)
{
	unsigned int x = va_arg(ap, unsigned int);

	return (print_hex(x, 0));
}

/**
 * print_X - takes am unsigned int and prints it in uppercase hex notation
 * @ap: unsigned int to print
 *
 * Return: number of digits printed
 */
char *print_X(va_list ap)
{
	unsigned int X = va_arg(ap, unsigned int);

	return (print_hex(X, 1));
}
