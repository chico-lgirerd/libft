/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:24:48 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/20 13:09:31 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*tab;

	if (size != 0 && nmemb > SIZE_MAX / size)
	total_size = nmemb * size;
	tab = malloc(total_size);
	if (tab == NULL)
		return (NULL);
	tab = ft_memset(tab, 0, total_size);
	return (tab);
}
