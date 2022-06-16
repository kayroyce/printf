#include "main.h"
/**
  * print_oct - convert decimal number to octal
  * @ap: argument parameter
  * Return: pointer to string with octal
  */

char *print_oct(va_list ap)
{
	unsigned int pos, temp, result, oct, i;
	char *str;

	oct = va_arg(ap, unsigned int);
	result = i = 0;
	pos = 1;
	while (oct)
	{
		result += (oct % 8) * pos;
		oct /= 8;
		pos *= 10;
		i++;
	}
	temp = i;
	pos /= 10;
	str = malloc(temp * sizeof(char) + 1);
	for (i = 0 ; i < temp; i++)
	{
		str[i] = ((result / pos) % 10) + '0';
		pos /= 10;
	}
	str[i] = '\0';
	return (str);
}
