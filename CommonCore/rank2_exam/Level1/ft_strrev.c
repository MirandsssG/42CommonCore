/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:39:46 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/20 20:45:23 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while  (str[j])
        j++;
    while (str[i] != '\0' && i < j)
    {
        j--;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "Ola Mundo";
    printf("%s", ft_strrev(str));
}