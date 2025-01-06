#include "libftprintf.h"

int    string_argument(va_list args)
{
    char    *str;

    str = va_arg(args, char *);
    return (write_str(str));
}