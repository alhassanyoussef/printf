#include "main.h"
/**
* int _print_int_no_flags This function prints an integer without any flags.
*@n: parameter or member 'n'
* Return: Always 0
*/
int _print_int_no_flags(int n)
{
int i = 0;
char buf[10];
if (n < 0)
{
write(1, "-", 1);
n = -n;
}
while (n != 0)
{
buf[i++] = (n % 10) + '0';
n /= 10;
}
while (i > 0)
{
write(1, &buf[i - 1], 1);
i--;
}
return (i);
}
/*
* _print_char  This function prints a character.
* Return: Always 0
*/
int _print_char(char c)
{
return (write(1, &c, 1));
}
/*
* _print_percent This function prints a percent sign.
* Return: Always 0
*/
int _print_percent()
{
return (write(1, "%", 1));
}
