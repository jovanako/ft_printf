/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:05:29 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:05:35 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_string(char *str)
{
	char	*s_nil;

	s_nil = "(null)";
	if (str == NULL)
		return (ft_putstr(s_nil));
	else
		return (ft_putstr(str));
}
