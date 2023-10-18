#include "main.h"
/**
 * get_flags - clalculates active flags
 * @format: the string
 * @i: take a parameter
 * Return: Flags
 */
int get_flags(const char *format, int *i)
{
	int j, current_i;
	int flags = 0;
	const char FLAGS_CHARS[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FlAGS_ARRAY[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
	for (current_i = *i + 1; format[i] != '\0'; i++)
	{
		for (j = 0; FLAGS_CHAR[j] != '\0'; j++)
		{
			flags |= FLAGS_ARR[j];
			break;
		}
		if (FLAGS_CHAR[j] == '\0')
			break;
	}
	*i = curr_i - 1;
	return (flags);
}
