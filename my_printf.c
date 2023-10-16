#include "main.h"
/**
 * _printf - this function produces the output 
 * according to the format
 * @format: is the format
 * Return: the number of chars printed excluding
 * NULL byte to end to output
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list mo;
	if (format == NULL)
		return (-1);
	va_start(mo, format);

	
		for(i = 0; format[i] != '\0'; i++)
		{
			if(format[i] == '%' && format[i + 1] == 's')
			{
			count += print_string(va_arg(mo, char *));
			i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'c')
			{
			count += print_char(va_arg(mo, int));
			i++;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'd')
			{
				count += print_decimal(va_arg(mo, int));
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'i')
			{
				count += print_int(va_arg(mo, int));
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		va_end(mo);

		return (count);
}
