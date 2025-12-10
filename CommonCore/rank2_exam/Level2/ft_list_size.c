/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:19:35 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/01 20:25:08 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    if (begin_list == 0)
        return (0);
    else
        return (1 + ft_list_size(begin_list->next));
}

