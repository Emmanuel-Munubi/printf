#include "main.h"

/**
 * @fmt: format string
 * @ap: va_list for arguments
 * 
 * Return: number of characters printed
 * Description: prints a string with format specifiers
 */
int my_print(const char *fmt, va_list ap, char *buffer, char *specifier_buffer)
{
	int state = 0;
	int i = 0;
	int count = 0;
	while (fmt[i] != '\0') {
		if (state == 0) {
			if (fmt[i] == '%') {
				state = 1;
			} else {
				/*putchar(fmt[i]);*/
				buffer[count] = fmt[i];
				count++;
			}
		} else if (state == 1) {
			specifier_buffer = get_specifier_buffer(fmt[i], ap);
			_strcat(buffer, specifier_buffer);
			count += _strlen(specifier_buffer);
			state = 0;
		}
		i++;
	}
	buffer[count] = '\0';
	return count;
}