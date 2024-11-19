/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:56:16 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/19 14:24:28 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int len1;
	int len2;

	len1 = ft_printf("Teste de caractere: %c\n", 'A');
	len2 = printf("Teste de caractere: %c\n", 'A');
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	len1 = ft_printf("Teste de string: %s\n", "Olá, mundo!");
	len2 = printf("Teste de string: %s\n", "Olá, mundo!");
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	void *ptr = (void *)0x7ffeefbff58;
	len1 = ft_printf("Teste de ponteiro: %p\n", ptr);
	len2 = printf("Teste de ponteiro: %p\n", ptr);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	len1 = ft_printf("Teste de inteiros: %d %i\n", 42, -42);
	len2 = printf("Teste de inteiros: %d %i\n", 42, -42);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	len1 = ft_printf("Teste de unsigned: %u\n", 4294967295u);
	len2 = printf("Teste de unsigned: %u\n", 4294967295u);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	len1 = ft_printf("Teste de hexadecimal: %x %X\n", 255, 255);
	len2 = printf("Teste de hexadecimal: %x %X\n", 255, 255);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	len1 = ft_printf("Teste de porcentagem: %%\n");
	len2 = printf("Teste de porcentagem: %%\n");
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	return (0);
}