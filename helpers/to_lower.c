#include "libftprintf.h"

int	to_lower(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}