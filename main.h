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
int format_c(va_list valist, char *buffer, int *index);
int format_s(va_list valist, char *buffer, int *index);
int print_i(va_list i);

  
#endif /* MAIN_H */
