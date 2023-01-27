#include "main.h"

/**
 * print_big_s - adds a big S to a buffer
 * @args: va_list of arguments
 * 
 * Return: string of the number
 */
char *print_big_s(va_list args)
{
        char *str = va_arg(args, char *);
        char *big_s = malloc(sizeof(char) * 2);
        char *temp = malloc(sizeof(char) * 2);
        int i = 0;

        big_s[0] = '\0';
        temp[1] = '\0';
        while (str[i])
        {
                if (str[i] == '%')
                {
                        temp[0] = '%';
                        big_s = _strcat(big_s, temp);
                }
                temp[0] = str[i];
                big_s = _strcat(big_s, temp);
                i++;
        }
        return (big_s);
}