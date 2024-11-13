/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:39:31 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/13 02:07:29 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*lsthead;
	t_list	*newnode;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	current = lst;
	lsthead = ft_lstnew(f(current->content));
	if (lsthead == NULL)
		return (NULL);
	current = current->next;
	while (current != NULL)
	{
		newnode = ft_lstnew(f(current->content));
		if (newnode == NULL)
		{
			ft_lstclear(&lsthead, del);
			return (NULL);
		}
		ft_lstadd_back(&lsthead, newnode);
		current = current->next;
	}
	return (lsthead);
}
