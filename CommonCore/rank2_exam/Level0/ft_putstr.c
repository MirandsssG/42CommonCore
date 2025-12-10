/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:05:32 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/17 12:08:03 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main()
{
    char str[] = "Ola Mundo";
    ft_putstr(str);
    return (0);
}