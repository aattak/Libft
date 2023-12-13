/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:11:39 by aattak            #+#    #+#             */
/*   Updated: 2023/12/05 14:42:28 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rlst;
	t_list	*new;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL_P);
	rlst = NULL_P;
	while (lst)
	{
		tmp = f(lst->content);
		new = ft_lstnew(tmp);
		if (!new)
		{
			del(tmp);
			ft_lstclear(&rlst, del);
			return (NULL_P);
		}
		ft_lstadd_back(&rlst, new);
		lst = lst->next;
	}
	return (rlst);
}
