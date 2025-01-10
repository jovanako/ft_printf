/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:45:27 by jkovacev          #+#    #+#             */
/*   Updated: 2025/01/08 11:59:33 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		write_str(char *s);
char	*print_hexadecimal(int n);
int		ft_printf(const char *format, ...);
int		print_char(char c);
int		print_string(char *str);
int		print_pointer(void *p);
int		print_int(int n);
int		print_unsigned(int n);
int		print_hex_low(int n);
int		print_hex_up(int n);

#endif
