/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:18:00 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/18 17:51:26 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);

int	ft_printchar(int c);

int	ft_formats(va_list args, const char format);

void	ft_putstr(char *str);

int	ft_printstr(char *str);

int ft_printnbr(int n);

int	ft_printpercent(void);

int	ft_num_len(unsigned int num);

char *ft_uitoa(unsigned int n);

int	ft_print_unsigned(unsigned int n);

int	ft_hex_len(unsigned int num);

void	ft_put_hex(unsigned int num, const char format);

int	ft_print_hex(unsigned int num, const char format);

int	ft_ptr_len(uintptr_t num);

void	ft_put_ptr(uintptr_t num);

int	ft_print_ptr(unsigned long long ptr);

#endif
