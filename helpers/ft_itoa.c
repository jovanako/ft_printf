#include "../ft_printf.h"

static size_t	calculate_int_length(long n)
{
	size_t	int_len;

	int_len = 0;
	if (n < 0)
		n *= -1;
	if (n == 0)
		int_len = 1;
	while (n > 0)
	{
		n /= 10;
		int_len++;
	}
	return (int_len);
}

static size_t	calculate_required_size(int n, size_t n_len)
{
	if (n < 0)
	{
		return (n_len + 1);
	}
	return (n_len);
}

static char	*generate_string(char *result, long num,
		size_t int_len, size_t res_len)
{
	size_t	i;

	i = res_len - 1;
	while ((i >= (res_len - int_len)) && num > 0)
	{
		result[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	if (i == 0)
		result[i] = '-';
	return (result);
}

int	ft_itoa(int n)
{
	size_t	int_len;
	size_t	res_len;
	long	num;
	int		count;
	char	*result;

	num = n;
	int_len = calculate_int_length(num);
	res_len = calculate_required_size(num, int_len);
	if (num < 0)
		num *= -1;
	result = (char *)malloc(res_len * sizeof(char) + 1);
	if (!result)
		return (0);
	result[res_len] = '\0';
	if (num == 0)
	{
		result[0] = '0';
		count = write_str(result);
		return (count);
	}
	result = generate_string(result, num, int_len, res_len);
	count = write_str(result);
	return (count);
}
