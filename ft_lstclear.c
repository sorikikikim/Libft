/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 18:10:13 by sorkim            #+#    #+#             */
/*   Updated: 2021/01/01 19:16:48 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *now;
	t_list *next;

	now = *lst;
	while (lst->next != 0)
	{
		next = now->next;
		ft_lstdelone(now, del);
		now = next;
	}
	*lst = 0;
}
