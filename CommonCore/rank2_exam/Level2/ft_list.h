/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:19:32 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/01 20:24:08 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_LIST_H
#ifndef FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void *data;
}       t_list;

#endif