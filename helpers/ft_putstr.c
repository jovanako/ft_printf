/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:02:37 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/13 13:02:46 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int		count;

	count = 0;
	while (s[count])
	{
		if (write (1, &s[count], 1) == -1)
			return (-1);
		count++;
	}
	return (count);
}
