/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:43:35 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/07 15:45:23 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft/libft.h"
#include "includes/libftprintf/ft_printf.h"
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define END_TRANSMISSION '\0'

void    send_signal(int pid, const char character)
{
    int                 i;
    char       temp_char;

    i = 8;
    temp_char = character;
    while (i > 0)
    {
        i--;
        temp_char = character >> i;
        if (temp_char % 2 == 0)
            kill(pid, SIGUSR2);
        else
            kill(pid, SIGUSR1);
        usleep(1000);        
    }
}

int main(int ac, char **av)
{
    pid_t       server_pid;
    const char  *message;
    int         i;
    
    if (ac != 3)
    {
        ft_printf("Usage: %s <pid> <message>\n", av[0]);
        exit(0);
    }
    server_pid = ft_atoi(av[1]);
    message = av[2];
    i = 0;
    while (message[i])
        send_signal(server_pid, message[i++]);
    send_signal(server_pid, '\0');
    return (0);
}