#include "main.h"
/**
 * _printf - the printing func.
 * @format: the string to be printed
 * Return: the num of chars to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int j;
	char c;
	char *str;

	va_start(list, format);
	for (j = 0; format && format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			write(1, &format[j], 1);
		}
		else
		{
			j++;
			switch (format[j])
			{
			case 'c':
			c = va_arg(list, int);
			write(1, &c, 1);
			break;
			case 's':
			str = va_arg(list, char *);
			if (str)
			write(1, str, strlen(str));
			break;
			case 'd':
			case 'i':
			{
			int num = va_arg(list, int);
			char str[12];
			sprintf(str, "%d", num);
			write(1, str,strlen(str));
			break;
			}
			case '%':
			write(1, &format[j], 1);
			break;
			}
		}
	}
	va_end(list);
	return (j);
}
