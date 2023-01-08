/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:43:35 by romaurel          #+#    #+#             */
/*   Updated: 2023/01/08 01:34:21 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*flist;

	if (!lst)
		return (0);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (NULL);
	flist = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->content)
		{
			ft_lstclear(&flist, (*del));
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	return (flist);
}
