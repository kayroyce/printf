#include "main.h"
/**
  * print_binary - convert decimal number to binary
  * @ap: argument parameter
  * Return: pointer to string with binary
  */

char *print_binary(va_list ap)
{
	int c, d, t, n;
	char *ptr;

	n = va_arg(ap, int);

	t = 0;
	ptr = (char *)malloc(sizeof(char) * (32 + 1));

	if (ptr == NULL)
		exit(EXIT_FAILURE);

	for (c = 31 ; c >= 0 ; c--)
	{
		d = n >> c;

		if (d & 1)
			*(ptr + t) = 1 + '0';
		else
			*(ptr + t) = 0 + '0';
		t++;
	}
	*(ptr + t) = '\0';

	return  (ptr);
}
