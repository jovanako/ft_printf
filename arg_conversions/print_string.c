/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_argument.c                                  :+:      :+:    :+:   */
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
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
	return (count);
}
