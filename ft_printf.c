/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:40:33 by abbahoua          #+#    #+#             */
/*   Updated: 2021/12/03 10:41:29 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_type(va_list ptr, const char s)
{
	if (s == 'c')
		ft_putchar(va_arg(ptr, int));
	else if (s == 's')
		ft_putstr(va_arg(ptr, char *));
	else if (s == 'p')
	{
		ft_putstr("0x");
		ft_putnbr16(va_arg(ptr, unsigned long), "0123456789abcdef");
	}
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(ptr, int));
	else if (s == 'u')
		ft_putnbr(va_arg(ptr, unsigned int));
	else if (s == 'x')
		ft_putnbr16(va_arg(ptr, unsigned int), "0123456789abcdef");
	else if (s == 'X')
		ft_putnbr16(va_arg(ptr, unsigned int), "0123456789ABCDEF");
	else if (s == '%')
		ft_putchar('%');
	else
		ft_putchar(s);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ptr;

	va_start (ptr, s);
	i = 0;
	g_len = 0;
	while (s[i])
	{
		if (s[i] != '%')
			ft_putchar(s[i]);
		else
			ft_type(ptr, s[++i]);
		i++;
	}
	va_end(ptr);
	return (g_len);
}

/*int main()
{
	//char a = 'a';
	//char *s = &a;
	printf("%%	\n");
	ft_printf("%% \n");
}*/
