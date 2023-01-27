#include "main.h"

/**
 * print_int - prints an unsigned int
 * @ap: va_list
 *
 * Return: string
 */
char *print_int(va_list ap)
{
	char *s = malloc(12);
	int i = 0, j = 0, k = 0, n = 0;
	int num = va_arg(ap, int);

	if (num == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	if (num < 0)
	{
		s[0] = '-';
		n = 1;
		num = -num;
	}
	while (num > 0)
	{
		s[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	s[i] = '\0';
	for (j = n, k = i - 1; j < k; j++, k--)
	{
		s[j] ^= s[k];
		s[k] ^= s[j];
		s[j] ^= s[k];
	}
	return (s);
}
