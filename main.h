#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
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
int print_i(va_list i);

  
#endif /* MAIN_H */
