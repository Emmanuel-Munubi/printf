#include "main.h"

/**
 * print_binary - adds a binary number to a buffer
 * @args: argument list
 * 
 * Return: string of the number
 */
char *print_binary(va_list args)
{
char *str;
        unsigned int num = va_arg(args, unsigned int);

        str = malloc(sizeof(char) * 100);
        if (!str)
                return (NULL);
        _itoa(num, str, 2);
        return (str);
}