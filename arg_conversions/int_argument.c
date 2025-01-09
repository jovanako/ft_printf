/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:04:10 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:04:14 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	int_argument(va_list args)
{
	int	n;

	n = va_arg(args, int);
	return (ft_itoa(n));
}
