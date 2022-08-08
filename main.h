#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;


/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @t: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct print
{
  char *t;
  int (*f)(va_list);
}print_t;

int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int print_percent(va_list l, flags_t *f);
  
#endif /* MAIN_H */
