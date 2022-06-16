#include "main.h"
/**
 * print_rot13 - encrypts string with rot13
 * @ap: string to change
 * Return: modified string
 */
char *print_rot13(va_list ap)
{
	int i = 0;
	char *str;
	char *nstr;

	str = va_arg(ap, char *);

	nstr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (nstr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			nstr[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (
					str[i] >= 'N' && str[i] <= 'Z'))
		{
			nstr[i] = str[i] - 13;
		}
		else
			(nstr[i] = str[i]);
		i++;
	}
	nstr[i] = '\0';

	return (nstr);
}
