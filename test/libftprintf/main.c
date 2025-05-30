/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:40:22 by dluis-ma          #+#    #+#             */
/*   Updated: 2025/05/22 12:41:49 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int len1;
	int len2;

	// Teste de caractere
	len1 = ft_printf("Teste de caractere: %c\n", 'A');
	len2 = printf("Teste de caractere: %c\n", 'A');
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	// Teste de string
	len1 = ft_printf("Teste de string: %s\n", "Olá, mundo!");
	len2 = printf("Teste de string: %s\n", "Olá, mundo!");
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	// Teste de ponteiro
	void *ptr = (void *)0x7ffeefbff58;
	len1 = ft_printf("Teste de ponteiro: %p\n", ptr);
	len2 = printf("Teste de ponteiro: %p\n", ptr);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	// Teste de inteiros
	len1 = ft_printf("Teste de inteiros: %d %i\n", 42, -42);
	len2 = printf("Teste de inteiros: %d %i\n", 42, -42);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	// Teste de unsigned
	len1 = ft_printf("Teste de unsigned: %u\n", 4294967295u);
	len2 = printf("Teste de unsigned: %u\n", 4294967295u);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	// Teste de hexadecimal (minúsculo e maiúsculo)
	len1 = ft_printf("Teste de hexadecimal: %x %X\n", 255, 255);
	len2 = printf("Teste de hexadecimal: %x %X\n", 255, 255);
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	// Teste de caractere de porcentagem
	len1 = ft_printf("Teste de porcentagem: %%\n");
	len2 = printf("Teste de porcentagem: %%\n");
	ft_printf("Comprimento: %d | printf: %d\n\n", len1, len2);

	return (0);
}
