/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_low_argument.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:03:28 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:03:31 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hex_low_argument(va_list args)
{
	int		n;
	int		count;
	char	*result;

	n = va_arg(args, int);
	result = to_lower(print_hexadecimal(n));
	count = write_str(result);
	return (count);
}
