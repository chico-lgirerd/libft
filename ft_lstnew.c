/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:22:50 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/09 13:11:47 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*newlist;

	newlist = malloc(sizeof(struct s_list));
	newlist->content = ft_memcpy(newlist->content, content, sizeof(content));
	newlist->next = NULL;
	return (newlist);
}
