#include "../libftprintf.h"

int     hex_low_argument(va_list args)
{
    int     n;
    int     count;
    char    *result;

    n = va_arg(args, int);
    result = to_lower(print_hexadecimal(n));
    count = write_str(result);
    return (count);
}