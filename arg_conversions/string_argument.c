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

int	string_argument(va_list args)
{
	char	*str;
	int		count;

	count = 0;
	str = va_arg(args, char *);
	while (str[count] != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
	return (count);
}
