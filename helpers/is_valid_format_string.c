/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_format_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:03:58 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/13 13:04:03 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	is_valid_format_string(char c)
{
	const char	*set;

	set = "cspdiuxX%";
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
