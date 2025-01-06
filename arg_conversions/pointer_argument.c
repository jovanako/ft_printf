#include "libftprintf.h"

static int     count_hex_digits(unsigned long n)
{
    int count;

    if (n == 0)
        return (1);
    count = 0;
    while (n > 0)
    {
        n /= 16;
        count++;
    }
    return (count);
}

static char    *generate_hex_string(unsigned long n, int i, char *result)
{
    const char      *hex_digits;

    hex_digits = "0123456789abcdef";
    while (n > 0)
    {
        result[i] = hex_digits[n % 16];
        n /= 16;
        i--;
    }
    return (result);
}

static int      p_null(char *s, int count)
{
    s[2] = '0';
    count = write_str(s);
    free(s);
    return (count);
}

int     pointer_argument(va_list args)
{
    void            *p;
    unsigned long   address_decimal;
    int             count_hex;
    char            *result;

    p = va_arg(args, void *);
    address_decimal = (unsigned long)p;
    count_hex = count_hex_digits(address_decimal) + 2;
    result = (char *)malloc((count_hex + 1) * sizeof(char));
    if (result == NULL)
        return (0);
    result[count_hex] = '\0';
    result[0] = '0';
    result[1] = 'x';
    if (p == NULL)
        p_null(result, count_hex);
    count_hex--;
    result = generate_hex_string(address_decimal, count_hex, result);
    count_hex = write_str(result);
    free(result);
    return (count_hex);
}