/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:43:19 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 15:48:58 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    
    int found = 0;
    const   char *a;

    while (s[i])
    {
        found = 0;
        const char *a = accept;
        
        while (*a)
        {
            if (s[i] == *a)
            {
                found = 1;
                break;
            }
            a++;
        }
        if (!found)
            break;
        i++;
    }
    return (i);
}

int main()
{
    const char *s = "Ola Mundo";
    const char *accept = "Ola";
    printf("%zu", ft_strspn(s, accept));
}