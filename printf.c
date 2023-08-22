#include "main.h"
/**
 * _printf - function that produces output according to format
 * @format:  is a pointer
 * Return: always 0
 */

int _printf(const char *format, ...)
{
  int count = 0;
  va_list args;
  va_start(args, format);

  while (*format)
  {
    if (*format == '%')
    {
      format++; 
      switch (*format)
      {
        case 'd':
          count += _print_int_no_flags(va_arg(args, int));
          break;
        case 'i':
          count += _print_int_no_flags(va_arg(args, int));
          break;
        case 'c':
          {
            char c = va_arg(args, int);
            count += _print_char(c);
          }
          break;
        case '%':
          count += _print_percent();
          break;
        default:
          count += _print_char('%'); 
          count += _print_char(*format);
          break;
      }
    }
    else
    {
      count += _print_char(*format);
    }
    format++;
  }

  va_end(args);
  return count;
}
