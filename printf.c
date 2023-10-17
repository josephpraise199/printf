#include "main.h"
#include <stdio.h>

int custom_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    char buffer[PRINTF_BUFSIZE];
    int result = custom_vsprintf(buffer, format, args);
    va_end(args);
    
    // Write the formatted string to the standard output
    fputs(buffer, stdout);

    return result;
}

