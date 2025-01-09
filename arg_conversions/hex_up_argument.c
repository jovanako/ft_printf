/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_up_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:03:48 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:03:52 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hex_up_argument(va_list args)
{
	int		n;
	int		count;
	char	*result;

	n = va_arg(args, int);
	result = to_upper(print_hexadecimal(n));
	count = write_str(result);
	return (count);
}
