/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkovacev <jkovacev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:45:27 by jkovacev          #+#    #+#             */
/*   Updated: 2024/12/11 11:45:49 by jkovacev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int		write_str(char *s);
int		ft_itoa(int n);
int		unsigned_itoa(int n);
int		print_pointer(void *p);
char	*print_hexadecimal(int n);
char	*to_lower(char *s);
char	*to_upper(char *s);
int		ft_printf(const char *format, ...);
int		char_argument(va_list args);
int		string_argument(va_list args);
int		pointer_argument(va_list args);
int		int_argument(va_list args);
int		unsigned_d_argument(va_list args);
int		hex_low_argument(va_list args);
int		hex_up_argument(va_list args);
int		percent_sign_argument();

#endif
