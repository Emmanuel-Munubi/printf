#include "main.h"

/**
 * @state: 0 normal
 *         1 specifier
 */
void my_print(const char *fmt, va_list ap)
{
	int i = 0;
	char *buffer = malloc(1024);
	int state = 0;
	char *specifier = malloc(1024);
	int specifier_index = 0;
	char *specifier_buffer = malloc(1024);
	/*int buff_size;*/

	while (fmt[i])
	{
		if (state == 0)
		{
			if (fmt[i] == '%')
			{
				state = 1;
				specifier_index = 0;
			}
			else
			{
				/* printf("%d", i); */
				buffer[i] = fmt[i];
			}
		}
		else if (state == 1)
		{
			if (fmt[i] == '%')
			{
				state = 0;
				buffer[i] = fmt[i];
			}
			else
			{
				specifier[specifier_index++] = fmt[i];
				
				
				if (fmt[i])
				{
					char *str = get_specifier_buffer(fmt[i], ap);
					_strncpy(specifier_buffer, str, 1024);
					
					buffer = _strcat(buffer, specifier_buffer);
					/*buff_size = _strlen(buffer);
					printf("%s\n", buffer);
					printf("%d\n%d\n", i, _strlen(buffer));*/
					state = 0;
				}
			}
		}
		i++;
	}
	buffer[i] = '\0';

	free(buffer);
	free(specifier);
	free(specifier_buffer);
	/*return (buff_size);*/
}