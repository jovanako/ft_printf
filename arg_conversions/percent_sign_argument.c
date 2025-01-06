#include "../libftprintf.h"

int     percent_sign_argument()
{
    char    c;

    c = '%';
    write (1, &c, 1);
    return (1);
}