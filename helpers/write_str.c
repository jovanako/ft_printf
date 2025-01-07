#include "../ft_printf.h"

int	write_str(char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		write (1, &s[count], 1);
		count++;
	}
	free(s);
	return (count);
}
