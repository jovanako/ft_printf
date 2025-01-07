#include "../ft_printf.h"

int	percent_sign_argument(void)
{
	char	c;

	c = '%';
	write (1, &c, 1);
	return (1);
}
