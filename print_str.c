#include "main.h"

/**
  * print_str - print string as string
  * @ap: string to print
  * Return: string
  */

char *print_str(va_list ap)
{
	char *ptr, *str, *copy_string;
	int str_len;

	str = va_arg(ap, char*);
	if (str == NULL)
		str = "(null)";

	str_len = _strlen(str);

	ptr = malloc((sizeof(char) * str_len) + BUFFERSIZE);
	copy_string = _strcpy(ptr, str);

	if (ptr == NULL)
		return (NULL);
	return (copy_string);
}
