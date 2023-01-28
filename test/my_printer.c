#include "main.h"

/**
 * my_print - buffers a formatted string to be printed
 * @fmt: format string to be parsed
 * @ap: va_list for arguments
 * @buffer: buffer to store output
 * @specifier_buff: buffer to store specifier output
 * Return: number of characters printed
 * Description: prints a string with format specifiers
 */
int my_print(const char *fmt, va_list ap, char *buffer, char *specifier_buff)
{
	int state = 0;
	int i = 0;
	int count = 0;

	while (fmt[i] != '\0')
	{
		if (state == 0)
		{
			if (fmt[i] == '%')
			{
				state = 1;
			} else
			{
				buffer[count] = fmt[i];
				count++;
			}
		} else if (state == 1)
		{
			if (fmt[i] == '%')
			{
				buffer[count] = '%';
				count++;
				state = 0;
			} else
			{
				specifier_buff = get_specifier_buff(fmt[i], ap);
				_strcat(buffer, specifier_buff);
				count += _strlen(specifier_buff);
				state = 0;
			}
		}
		i++;
	}

	buffer[count] = '\0';
	return (count);
}
