/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:10:01 by abbahoua          #+#    #+#             */
/*   Updated: 2021/11/29 23:57:20 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr16(unsigned long n, char *hex)
{
	if (n > 255)
	{
		ft_putnbr16(n / 16, hex);
		ft_putchar(hex[n % 16]);
	}
	else
	{
		if (n >= 16)
		{
			ft_putchar(hex[n / 16]);
			ft_putchar(hex[n % 16]);
		}
		else
			ft_putchar(hex[n % 16]);
	}
}

/*int	main()
{
	ft_putnbr16(-1);
}*/
