#include "main.h"

/**
  * print_unsign - converts unsigned to char arrays
  * @ap: unsigned int to convert from va_args
  * Return: pointer to string
  */
char *print_unsign(va_list ap)
{
	unsigned int i, res, temp, expo, count;
	char *str;

	res = va_arg(ap, unsigned int);
	count = i = 0;
	expo = 1;
	temp = res;
	while (temp >= 10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	str = malloc((count++) * sizeof(char));
	while (expo >= 1)
	{
		str[i++] = (((res / expo) % 10) + '0');
		expo /= 10;
	}
	return (str);
}
