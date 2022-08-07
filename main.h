#ifndef MAIN_C
#define MAIN_C
#include <sdtarg.h>
#include <stdio.h>

typedef struct print
{
  char *t;
  int (*f)(va_list);
}print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
#endif /* MAIN_C */
