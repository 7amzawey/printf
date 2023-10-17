#include "main.h"
/**
 * _printf - the printing func.
 * @format: the string to be printed
 * Return: the num of chars to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i;
	char c;
	char *str;

	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			i++;
			switch (format[i])
			{
			case 'c':
			c = va_arg(list, int);

				write(1, &c, 1);
				break;
			case 's':
			str = va_arg(list, char *);

			if (str)
			{
				write(1, str, strlen(str));
			}

			break;
			case '%':
			write(1, &format[i], 1);
			break;
			}
		}
	}
	va_end(list);
	return (i);
}
