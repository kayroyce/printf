#include "main.h"
/**
  * select_func - select and return the matched function
  * @c: argument parameter used to pick the function
  * Return: Pointer to picked function
  */

char* (*select_func(char c))(va_list)
{
	int i;
	functions container[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsign},
		{"o", print_oct},
		{"r", print_rev},
		{"R", print_rot13},
		{"x", print_x},
		{"X", print_X},
		{"p", print_pointer},
		{NULL, NULL}
	};

	for (i = 0; container[i].op; i++)
	{

		if (c == *container[i].op)
		{
			return (container[i].func);
		}
	}

	return (NULL);
}
