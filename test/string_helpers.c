#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}

/**
 * _strrev - reverses a string
 * @str: string to reverse
 * Return: reversed string
 */
char *_strrev(char *str)
{
        int i, j;
        char temp;

        for (i = 0, j = _strlen(str) - 1; i < j; i++, j--)
        {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
        }

        return (str);
}

/**
 * _itoa - converts an integer to a string
 * @num: number to convert
 * @str: string to store the number
 * @base: base of the number
 * Return: string of the number
 */
char *_itoa(int num, char *str, int base)
{
        int i = 0, isNegative = 0;
        unsigned int n;

        if (num == 0)
        {
                str[i++] = '0';
                str[i] = '\0';
                return (str);
        }

        if (num < 0 && base == 10)
        {
                isNegative = 1;
                n = num * -1;
        }
        else
                n = num;

        while (n != 0)
        {
                int rem = n % base;
                str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
                n = n / base;
        }

        if (isNegative)
                str[i++] = '-';

        str[i] = '\0';

        return (_strrev(str));
}