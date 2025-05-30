/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 06:23:27 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/02 06:27:18 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        ++n;
    }
}

int main()
{
    unsigned int a, b, result;

    // Entrada do usuário
    printf("Digite dois números: ");
    scanf("%u %u", &a, &b);

    // Calcula o MMC
    result = lcm(a, b);

    // Exibe o resultado
    printf("MMC de %u e %u é: %u\n", a, b, result);

    return 0;
}