/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:15:59 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:13:13 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	argument_to_print(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += char_argument(args);
	else if (*format == 's')
		count += string_argument(args);
	else if (*format == 'p')
		count += pointer_argument(args);
	else if (*format == 'd' || *format == 'i')
		count += int_argument(args);
	else if (*format == 'u')
		count += unsigned_d_argument(args);
	else if (*format == 'x')
		count += hex_low_argument(args);
	else if (*format == 'X')
		count += hex_up_argument(args);
	else if (*format == '%')
		count += percent_sign_argument();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += argument_to_print(format, args);
		}
		else
		{
			write (1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
