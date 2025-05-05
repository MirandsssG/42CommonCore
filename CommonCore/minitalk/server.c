/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:43:47 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/05 10:36:55 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft/libft.h"
#include "includes/libftprintf/ft_printf.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define END_TRANSMISSION '\0'

void    sig_handler(int signal)
{
    static unsigned char    current_char;
    static int              bit_index;

    current_char <<= 1;
    current_char |= (signal == SIGUSR1);
    bit_index++;
    if (bit_index == 8)
    {
        if (current_char == END_TRANSMISSION)
            ft_printf("\n");
        else
            ft_printf("%c", current_char);
        bit_index = 0;
        current_char = 0;
    }
}

int main(void)
{
    ft_printf("%d\n", getpid());
    signal(SIGUSR1, sig_handler);
    signal(SIGUSR2, sig_handler);
    while (1)
        pause();
    return (0);
}