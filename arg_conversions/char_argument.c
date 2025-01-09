/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:02:59 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:03:07 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	char_argument(va_list args)
{
	char	c;

	c = va_arg(args, int);
	write (1, &c, 1);
	return (1);
}
