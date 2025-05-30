/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:14:08 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 17:19:23 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;
    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write (1, &bit, 1);
    }
}

int main()
{
    unsigned char octet = 2;
    print_bits(octet); 
}