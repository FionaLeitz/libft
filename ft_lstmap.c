/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:12:12 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/26 14:05:56 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
{
	t_list	*lst2;

	lst2 = malloc(sizeof(t_list));
	while (lst->next != NULL)
	{

		lst2 = ft_lstnew(f(lst->content));
		lst2->next = 
		lst = lst->next;
	}
}
