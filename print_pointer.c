#include "main.h"

/**
 * print_pointer - adds a pointer to the buffer
 * @args: va_list of arguments
 * 
 * Return: string of the address
 */
char *print_pointer(va_list args)
{
        char *str = malloc(sizeof(char) * 100);
        unsigned long int num = va_arg(args, unsigned long int);
        int i = 0;
        char temp;

        if (num == 0)
        {
                str[i++] = '0';
                str[i] = '\0';
                return (str);
        }

        while (num != 0)
        {
                temp = num % 16;
                if (temp < 10)
                        temp = temp + 48;
                else
                        temp = temp + 87;
                str[i++] = temp;
                num = num / 16;
        }
        str[i] = '\0';
        str = _strrev(str);
        str = _strcat("0x", str);
        return (str);
}