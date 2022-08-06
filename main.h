#ifndef MAIN_C
#define MAIN_C

typedef struct print
{
  char *t;
  int (*f)(va_list);
}print_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_C */
