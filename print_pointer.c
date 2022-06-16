#include "main.h"
/**
 * print_pointer - print pointer address
 * @ap: address to print
 *
 * Return: pointer to number of characters to print
 */
char *print_pointer(va_list ap)
{
	int count = 0;
	unsigned int i, sum, a[16];
	unsigned long n, m;
	char *ptr, *cunt, *str = "(nil)";

	ptr = malloc(sizeof(char) * BUFFERSIZE);
	cunt = _strcpy(ptr, (char *)&count);
	n = va_arg(ap, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (cunt);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	m = pow_num(16, 15); /* 16 ^ 15 */
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (cunt);
}
