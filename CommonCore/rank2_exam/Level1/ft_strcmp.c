/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:33:23 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/20 20:03:35 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

int main()
{
    char s1[] = "555";
    char s2[] = "777";
    printf("%d", ft_strcmp(s1, s2));
}