#include "../libftprintf.h"

int     hex_up_argument(va_list args)
{
    int     n;
    int     count;
    char    *result;

    n = va_arg(args, int);
    result = to_upper(print_hexadecimal(n));
    count = write_str(result);
    return(count);
}