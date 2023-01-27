#include "main.h"

/**
 * print_hex - adds a hex number to the buffer
 * @args: va_list containing the number to print
 * Return: string of hex number
 */
char *print_hex(va_list args)
{
        char *str;
        unsigned int num = va_arg(args, unsigned int);

        str = malloc(sizeof(char) * 100);
        if (!str)
                return (NULL);
        _itoa(num, str, 16);
        return (str);
}