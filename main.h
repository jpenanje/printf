#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_buf(char *buf, unsigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);
#endif
