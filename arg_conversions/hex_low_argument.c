#include "libftprintf.h"

int     hex_low_argument(va_list args)
{
    int     n;

    n = va_arg(args, int);
    return(print_hexadecimal(n));
}