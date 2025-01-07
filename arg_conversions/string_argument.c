#include "../ft_printf.h"

int	string_argument(va_list args)
{
	char	*str;
	int		count;

	count = 0;
	str = va_arg(args, char *);
	while (str[count] != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
	return (count);
}
