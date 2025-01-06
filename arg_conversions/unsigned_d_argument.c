#include "libftprintf.h"

int     unsigned_d_argument(va_list args)
{
    int             n;
    unsigned int    p;

    n = va_arg(args, int);
    p = (unsigned int)n;
    if (n > 0)
        return (ft_itoa(n));
    return (ft_itoa(p));
}