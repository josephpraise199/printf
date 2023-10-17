#ifndef CUSTOM_PRINTF_H
#define CUSTOM_PRINTF_H

#include <stdarg.h>
#include <stddef.h>

// Define a struct for format specifier functions
typedef struct print_function {
    char ident;
    int (*f)(va_list arg);
} print_function_t;

// Custom printf function
int custom_printf(const char *format, ...);

#endif // CUSTOM_PRINTF_H

