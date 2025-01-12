/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_format_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:00:34 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 12:00:45 by jkovacev         ###   ########.fr       */
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
