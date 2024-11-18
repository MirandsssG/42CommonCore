/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:36:26 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/18 17:51:43 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	p_lenght;

	p_lenght = 0;
	if (format == 'c')
		p_lenght += ft_printchar(va_arg(args, int));
	else if (format == 's')
		p_lenght += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		p_lenght += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		p_lenght += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		p_lenght += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		p_lenght += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		p_lenght += ft_printpercent();
	return (p_lenght);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	int	p_lenght;
	
	i = 0;
	p_lenght = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			p_lenght += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			p_lenght += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (p_lenght);
}
