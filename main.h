#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

// Defining the macro for formatting a string
#define PRINTF_BUFSIZE 100  // Adjust the buffer size as needed

// Function prototypes
int custom_printf(const char *format, ...);
int custom_vsprintf(char *buf, const char *format, va_list args);

#endif // MAIN_H

