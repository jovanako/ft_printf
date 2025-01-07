#include "../ft_printf.h"

int	unsigned_d_argument(va_list args)
{
	int	n;

	n = va_arg(args, int);
	return (unsigned_itoa(n));
}
