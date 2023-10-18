#include "main.h"
/**
 * get_percision - calculates the percision for 
 * printing
 * @format: the bloody string
 * @i: list o fhte argument
 * Return: Percision.
 */
int get_percision(const char *format, int *i, va_list list)
{
	int current_i;
	int percision = -1;

	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		if (format[current_i] == '.')
		{
			percision = 0;
		}
		else if (is_digit(format[current_i]))
		{
			percision *= 10;
			percision += format[current_i] - '0';
			break;
		}
		else
		{
			break;
		}
	}
	*i = current_i - 1;
	return (percision);
}
