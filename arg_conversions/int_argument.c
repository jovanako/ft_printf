#include "../ft_printf.h"

int	int_argument(va_list args)
{
	int	n;

	n = va_arg(args, int);
	return (ft_itoa(n));
}
