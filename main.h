#ifndef MAIN_C
#define MAIN_C

typedef struct print
{
  char *t;
  int (*f)(va_list);
}print_t;

int _printf(const char *format, ...);


#endif /* MAIN_C */
