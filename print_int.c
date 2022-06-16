#include "main.h"

/**
  * _putchar - write to stdout
  * @c: character to output
  * Return: 1 if success, 0 if not
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * convert_int_to_str - makes an int a string
 * @str: string result
 * @num: integer to be converted to string
 *
 * Return: pointer to the string
 **/
char *convert_int_to_str(char str[], int num)
{
	int i, rem, len = 0, n;
	char *ptr;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';

	ptr = malloc(sizeof(char) * (_strlen(str) + BUFFERSIZE));
	return (_strcpy(ptr, (char *)&str));
}

/**
 * print_int - get integer length
 * @ap: argument parameter
 * Return: string
 **/
char *print_int(va_list ap)
{
	int i, rem, n, len, num;
	char *ptr, str[10];

	num = va_arg(ap, int);
	n = num;
	len = 0;

	while (n != 0)
	{
		len += 1;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';

	ptr = malloc(sizeof(char) * (_strlen(str)) + BUFFERSIZE);

	return (_strcpy(ptr, (char *)&str));
}
