#include "main.h"

/**
  * _strlen - print length of string
  * @str: string passed
  * Return: length as int
  */

int _strlen(char *str)
{
	int y = 0;

	while (str[y] != '\0')
		y++;
	return (y);
}

/**
  * _strcpy - copy from one file to another
  * @dest: destination
  * @src: source
  * Return: pointer to destination
  */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
  * pow_num - raise x to power y
  * @x: base number
  * @y: power
  * Return: result
  */

int pow_num(int x, int y)
{
	int power = 1, i;

	for (i = 1; i <= y; ++i)
	{
		power = power * x;
	}

	return (power);
}

/**
  * print_percent - output percentage symbol
  * @ap: argument parameter
  * Return: % as string
  */

char *print_percent(va_list ap)
{
	char *str;
	int q, p = '%';

	q = va_arg(ap, int);
	if (q == '%')
		str = (char *)&p;
	return (str);
}

/**
  * no_match - no matches found except %
  * @c: character unmatched
  * Return: % and character
  */

char *no_match(char c)
{
	char str[3];
	char *ptr;

	ptr = (char *)&str;
	str[0] = '%';
	str[1] = c;
	str[2] = '\0';
	return (ptr);
}
