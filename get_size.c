#include "main.h"
#define S_LONG 8
#define S_SHORT 2
/**
 * get_size - Determines the size of a format specifier.
 * @format: The format string.
 * @i: Pointer to the current position in the format string.
 *
 * Return: The size of the format specifier, or 0 if there is no size modifier.
 */
int get_size(const char *format, int *i)
{
        int curr_i = *i + 1;
        int size = 0;

        if (format[curr_i] == 'l')
                size = S_LONG;
        else if (format[curr_i] == 'h')
                size = S_SHORT;

        if (size == 0)
                *i = curr_i - 1;
        else
                *i = curr_i;

        return (size);
}
