#include "main.h"
/**
 * _printf - printf func
 * @format: the string
 * Return: printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, print_chars = 0;
	int flags, width, percision, size, buffer_index = 0;
	char buffer[BUFF_SIZE];
	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buffer_index++] = format[i];
			if (buffer_index == BUFF_SIZE)
				print_buffer(buffer, &buff index);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buffer_index);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			percision = get_percision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer, flags, width, percision, size);
			if (printed == -1)
				return (-1);
			printed chars += printed;
		}
	}
	print_buffer(buffer, &buffer_index);
	va_end(list);
	return (printed_chars);
}
