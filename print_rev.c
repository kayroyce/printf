#include "main.h"

/**
 * print_rev - reverses a string
 * @ap: string to reverse
 * Return: reversed string
 */

char *print_rev(va_list ap)
{
	char *rev;
	char *str;
	int i = 0, len, j;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	len = _strlen(str);

	rev = malloc(sizeof(char) * BUFFERSIZE);

	if (rev == NULL)
		return (NULL);

	for (j = (len - 1); j >= 0; j--)
	{
		rev[i++] = str[j];
	}
	rev[i] = '\0';

	return (rev);
}
