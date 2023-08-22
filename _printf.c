#include "main.h"

/**
 * _printf - function that produces output according to format
 * @format: pointer
 * Return: (0)
 */

int _printf(const char *format, ...)
{
	int p_char = 0;
	va_list a_rgs;

	va_start(a_rgs, format);

	if (format == NULL)
	return (-1);
	while (*format)
	{
		if (*format != '%')
		{	write(1, format, 1);
			p_char++; }
		else
		{
			format++;
			if (*format == '\0')
			break;
			if (*format == '%')
			{	write(1, format, 1);
				p_char++; }
			else if (*format == 'c')
			{	char ch = va_arg(a_rgs, int);

				write(1, &ch, 1);
				p_char++; }
			else if (*format == 's')
			{	char *star = va_arg(a_rgs, char*);
				int len = 0;

				while (star[len] != '\0')
					len++;
				write(1, star, len);
				p_char += len; }
		}
		format++;
	}
	va_end(a_rgs);
	return (p_char);
}
