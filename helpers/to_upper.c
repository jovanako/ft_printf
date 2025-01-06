#include "libftprintf.h"

int	to_upper(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}