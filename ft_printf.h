/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:06:17 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/30 21:28:29 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		g_len;
int		ft_printf(const char *s, ...);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(long long i);
void	ft_putnbr16(unsigned long i, char *hex);

#endif
