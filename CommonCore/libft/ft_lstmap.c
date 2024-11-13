/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:54:48 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/13 15:02:34 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list 	*result;
	t_list	*temp;
	void	*set;
	
	if (lst == NULL || f == NULL)
		return (NULL);
	result = NULL;
	while (lst)
	{
		set = f(lst->content);
		temp = ft_lstnew(set);
		if (!temp)
		{
			del(set);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (result);
}
