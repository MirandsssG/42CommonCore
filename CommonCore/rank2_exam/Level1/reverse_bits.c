/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:27:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 17:33:00 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    unsigned char bit = 0;
    int i = 0;

    while (i < 8)
    {
        bit = (octet >> i) & 1;
        result |= bit << (7 - i);
        i++;
    }
    return (result);
}
