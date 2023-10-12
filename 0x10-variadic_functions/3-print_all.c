#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print any arguments provided to a function
 * @format: the argument specifier
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    char *str;
    va_list spc;
    int check_stat = 0; // Initialize check_stat to 0

    va_start(spc, format);

    while (format != NULL && format[i] != '\0')
    {
        switch (format[i])
        {
            case 'i':
                printf("%d", va_arg(spc, int));
                check_stat = 0;
                break;
            case 'f':
                printf("%f", va_arg(spc, double));
                check_stat = 0;
                break;
            case 'c':
                printf("%c", (char) va_arg(spc, int)); // Cast to char
                check_stat = 0;
                break;
            case 's':
                str = va_arg(spc, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                check_stat = 0;
                break;
            default:
                check_stat = 1;
                break;
        }

        if (format[i + 1] != '\0' && check_stat == 0)
            printf(", ");

        i++;
    }

    va_end(spc);
    printf("\n");
}

