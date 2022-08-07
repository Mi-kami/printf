#include "main.h"
#include <stdarg.h>

/**
 * print_s - a funtion that prints strings.
 *@s: string to be printed.
 *Return: i
*/

int print_s(va_list s)
{
char *str = va_arg(s, char *);
int i = 0;
if (str == NULL)
str = "(null)";
while (str[i])
_putchar(str[i++]);
return (i);
}
