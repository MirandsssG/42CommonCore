/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:58:50 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/17 12:04:19 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putnbr (int n)
{
    char str[10] = "0123456789";
    
    if (n > 9)
        ft_putnbr(n / 10);
    write (1, &str[n % 10], 1);
}

int main()
{
    int n = 1;
    while (n <= 100)
    {
        if (n % 5 == 0 && n % 3 == 0)
            write (1, "fizzbuzz", 8);
        else if (n % 3 == 0)
            write (1, "fizz", 4);
        else if (n % 5 == 0)
            write (1, "buzz", 4);
        else
            ft_putnbr(n);
        n++;
        write (1, "\n", 1);
    }
}