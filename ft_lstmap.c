/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:39:31 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/13 16:00:31 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lsthead;
	t_list	*newnode;
	void	*newcontent;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newcontent = f(lst->content);
	lsthead = ft_lstnew(newcontent);
	if (lsthead == NULL)
	{
		del(newcontent);
		return (NULL);
	}
	lst = lst->next;
	while (lst != NULL)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (newnode == NULL)
		{
			del(newcontent);
			ft_lstclear(&lsthead, del);
			return (NULL);
		}
		ft_lstadd_back(&lsthead, newnode);
		lst = lst->next;
	}
	return (lsthead);
}
