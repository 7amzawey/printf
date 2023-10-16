#include "main.h"
/**
 * print_string - prints a given string
 * @s: is the string to be printed
 * Return: the given string
 */
int print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
