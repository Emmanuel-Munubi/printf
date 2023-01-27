#include "main.h"

/**
 * print_octal - adds an octal to the buffer
 * @args: list of arguments
 * 
 * Return: string of the number
 */
char *print_octal(va_list args)
{
        char *str;
        unsigned int num = va_arg(args, unsigned int);

        str = malloc(sizeof(char) * 100);
        if (!str)
                return (NULL);
        _itoa(num, str, 8);

        return (_strrev(str));
}