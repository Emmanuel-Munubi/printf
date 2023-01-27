#include "main.h"

/**
 * print_rot - adds a rot13 number to a buffer
 * @args: list of arguments
 * 
 * Return: string of the number
 */
char *print_rot(va_list args)
{
        char *str = va_arg(args, char *);
        char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
        char *buffer = malloc(sizeof(char) * 1024);
        int i, j;

        for (i = 0; str[i]; i++)
        {
                for (j = 0; j < 52; j++)
                {
                        if (str[i] == rot13[j])
                        {
                                buffer[i] = rot13[j + 13];
                                break;
                        }
                        else
                                buffer[i] = str[i];
                }
        }
        buffer[i] = '\0';
        return (buffer);
}